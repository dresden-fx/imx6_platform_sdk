/*
 * Copyright (C) 2012, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
 */

#include "handletable.h"
#include "devicetable.h"
#include "filesystem/os_filesystem_errordefs.h"
#include "filesystem/fsproj.h"
#include "drivers/media/ddi_media.h"
#include "filespec.h"

extern int32_t g_FSinitErrorCode;
extern int32_t gCurrentRecord;
extern HandleTable_t *Handle;
extern FileSystemMediaTable_t *MediaTable;
extern FileSpecs_t * filespec;
extern uint8_t gCurrentWorkingdirectory[];
extern const uint8_t Short_NameRes_Ch[];
extern const uint8_t Long_NameRes_Ch[];
extern const uint8_t DriveLetter[];

//! GET_FILE_SIZE macro is a lightweight version of GetFileSize function
//! There are some places where GetFileSize is called again and again
//! and in some of those places GetFileSize follows a call to Handleactive.
//! But, Handleactive is called from within GetFileSize.
//! So, it's best to use this macro to save time, especially after having
//! called HandleActive on HandleNumber.
#define GET_FILE_SIZE(HandleNumber) (Handle[(HandleNumber)].FileSize)

// Media cache wrappers.
RtStatus_t FSWriteSector(int32_t deviceNumber, int32_t sectorNumber, int32_t destOffset, uint8_t * sourceBuffer, int32_t sourceOffset, int32_t numBytesToWrite, int32_t writeType);
RtStatus_t FSWriteSector_BypassCache(int32_t deviceNumber, int32_t sectorNumber, int32_t destOffset, uint8_t * sourceBuffer, int32_t sourceOffset, int32_t numBytesToWrite, int32_t writeType);
RtStatus_t FSEraseSector(int32_t deviceNumber, int32_t sectorNumber);
int32_t * FSReadSector(int32_t deviceNumber, int32_t sectorNumber, int32_t writeType, uint32_t * token);
int32_t * FSReadMultiSectors(int32_t deviceNumber, int32_t sectorNumber, int32_t writeType, 
	uint8_t *buffer, int size);
int32_t * FSReadSector_BypassCache(int32_t deviceNumber, int32_t sectorNumber, int32_t writeType, uint8_t *pBuffer, uint32_t * token);
RtStatus_t FSReleaseSector(uint32_t token);
RtStatus_t FSFlushSector(int32_t deviceNumber, int32_t sectorNumber, int32_t writeType, int32_t ix, int32_t * writeFlag);

int32_t ConverToShortname(uint8_t *file,uint8_t *filenamebuf,int32_t index,int32_t length);

///////////////////////////////////////////////////////////////////////////////
//! \brief Gets a word from the given unicode string at the given offset and updates the offset accordingly.
//! 
//! \fntype Reentrant Function 
//!
//! \param[in] Buffer Pointer to the buffer.
//! \param[in] offset Pointer to the offset.
//!
//! \return TBD
//!
//! \todo [PUBS] Add definition(s).
//!
//! \internal
//! \see To view the function definition, see getchar.c.
///////////////////////////////////////////////////////////////////////////////
int32_t GetCharW(uint8_t *Buffer,int32_t *offset);
///////////////////////////////////////////////////////////////////////////////
//! \brief Gets a character from the given string at the given offset and updates the offset accordingly.
//!
//! \fntype Reentrant Function  
//!
//! This	function 
//!
//! \param[in] Buffer Pointer to the buffer.
//! \param[in] offset Pointer to the offset   
//!
//! \return TBD
//!
//! \todo [PUBS] Add definition(s).
//!
//! \internal
//! \see To view the function definition, see getchar.c.
///////////////////////////////////////////////////////////////////////////////
//int32_t GetChar(uint8_t *Buffer,int32_t *offset);
RtStatus_t GetChar(uint8_t *Buffer,int32_t *offset);
///////////////////////////////////////////////////////////////////////////////
//! \brief Puts a character in the given string at given offset 
//!                  and updates the offset accordingly.
//!
//! \fntype Reentrant Function  
//!
//! \param[in] Buffer Pointer to the buffer.
//! \param[in] offset Pointer to the offset.   
//! \param[in] Char   Character to put.
//!
//! \internal
//! \see To view the function definition, see putchar.c.
///////////////////////////////////////////////////////////////////////////////
void PutChar(uint8_t *Buffer,int32_t *offset,int32_t Char);
///////////////////////////////////////////////////////////////////////////////
//! \brief Puts a word in the given unicode string at given offset and updates the offset accordingly.
//!
//! \fntype Reentrant Function  
//!
//! \param[in] Buffer Pointer to the buffer.
//! \param[in] offset Pointer to the offset.  
//! \param[in] Char   Character/word to put.
//!
//! \internal
//! \see To view the function definition, see putchar.c.
///////////////////////////////////////////////////////////////////////////////
void PutCharW(uint8_t *Buffer,int32_t *offset,int32_t Char);
///////////////////////////////////////////////////////////////////////////////
//! \brief Copies the string from current position to another string.
//!
//! \fntype Reentrant Function  
//!
//!   This function copies the string from current position to the 
//!   directory separator or null character in the file path to 
//!   another string called name.Current position is set to next 
//!   directory separator or to end of file path.
//!
//! \param[in]  filepath Pointer to the file path.
//! \param[out] currentPosition Current position.   
//!
//! \return Next current position.
//!
//! \note This function considers the string to be Unicode.
//!
//! \todo [PUBS] Check definitions.
//!
//! \internal
//! \see To view the function definition, see getname.c.
///////////////////////////////////////////////////////////////////////////////
//int32_t GetnameW(uint8_t *filepath,int32_t currentPosition);
RtStatus_t GetnameW(uint8_t *filepath,int32_t currentPosition);
///////////////////////////////////////////////////////////////////////////////
//! \brief Copies the string from current position to another string.
//!
//! \fntype Reentrant Function  
//!
//!   This function copies the string from current position to the 
//!   directory separator or null character in the file path to 
//!   another string called name.Current position is set to next 
//!   directory separator or to end of file path. 
//!
//! \param[in]  filepath Pointer to the file path.
//! \param[out] currentPosition Current position.   
//!
//! \return Next current position.
//!
//! \note This function considers the string to be DBCS.
//!
//! \todo [PUBS] Check definitions.
//!
//! \internal
//! \see To view the function definition, see getname.c.
///////////////////////////////////////////////////////////////////////////////
//int32_t Getname(uint8_t *filepath, int32_t currentPosition);
RtStatus_t Getname(uint8_t *filepath, int32_t currentPosition);
///////////////////////////////////////////////////////////////////////////////
//! \brief Copies the string from current position to another string.
//!
//! \fntype Reentrant Function  
//!   
//! This function copies the string from current position to the 
//! directory separator or null character in the file path to 
//! another string called name.Current position is set to next 
//! directory separator or to end of file path.
//!
//! \param[in] filepath        Pointer to filepath.
//! \param[in] currentPosition Current position.  
//!
//! \return Next current position.
//!
//! \note This function considers the string to be Unicode.
//!
//! \todo [PUBS] Check definition; definition is same as GetnameW.
//!
//! \internal
//! \see To view the function definition, see getname.c.
///////////////////////////////////////////////////////////////////////////////
int32_t GetDirnameW(uint8_t *filepath,int32_t currentPosition);

///////////////////////////////////////////////////////////////////////////////
//! \brief Copies first string (\c filepath) to second string (\c gCworkingDir).
//!
//! \fntype Function 
//!
//! \param[in] filepath     Pointer to the file path.
//! \param[in] gCworkingDir Pointer to the second string.
//! \param[in] index        TBD
//! \param[in] length       TBD
//!
//! \return Status of the call.
//! \retval SUCCESS If call was successful.
//! \retval Error   If error occurs.
//!
//! \todo [PUBS] Add definition(s), verify direction of parameters, and list error codes.
//!
//! \internal
//! \see To view the function definition, see setcwd.c.
///////////////////////////////////////////////////////////////////////////////
RtStatus_t Setcwd(uint8_t *filepath, uint8_t *gCworkingDir, int32_t index, int32_t length);
///////////////////////////////////////////////////////////////////////////////
//! \brief Finds a free handle and copies the handle 0 (CWD handle) to this new handle.
//!
//! \fntype Function 
//!
//! \return Returns the handle number of the new free handle found or error if function fails
//!
//! \internal
//! \see To view the function definition, see handleres.c.
///////////////////////////////////////////////////////////////////////////////
int32_t GetCWDHandle(void);

///////////////////////////////////////////////////////////////////////////////
//! \brief Converts the given DBCS string to UNICODE.
//!
//! \fntype Reentrant Function 
//!
//! \param[in] filepath Pointer to the file name.
//! \param[in] buf      Pointer to the buffer.
//! \param[in] index    Starting point for the string.
//! \param[in] length   Length of the string (ending point of the string).
//!
//! \internal
//! \see To view the function definition, see fsunicode.c.
///////////////////////////////////////////////////////////////////////////////
void DBCStoUnicode(uint8_t *filepath, uint8_t *buf,int32_t index, int32_t length);
///////////////////////////////////////////////////////////////////////////////
//! \brief Returns the length of a string. 
//!
//! \fntype Function 
//!
//! \param[in] filepath Pointer to the file path.
//!
//! \return Number of characters in the string.
//!
//! \note This function considers the string as DBCS.
//!
//! \internal
//! \see To view the function definition, see .
///////////////////////////////////////////////////////////////////////////////
int32_t Strlength(uint8_t *filepath);
///////////////////////////////////////////////////////////////////////////////
//! \brief Returns the length of a string. 
//!
//! \fntype Function 
//!
//! \param[in] filepath Pointer to the file path.
//!
//! \return Number of characters in the string.
//!
//! \note This function considers the string as Unicode.
//!
//! \internal
//! \see To view the function definition, see .
///////////////////////////////////////////////////////////////////////////////
int32_t StrlengthW(uint8_t *filepath);


//! \brief Returns cluster Shift
int32_t FSClusterShift(int32_t DeviceNum);

// Function Prototypes.
RtStatus_t CreateDirectory(int32_t HandleNumber,uint8_t *Filepath,int32_t length,int32_t index,int32_t stringtype);                                     
RtStatus_t Handleactive(int32_t HandleNumber);
RtStatus_t ReadRootdirRecord(int32_t HandleNumber,int32_t RecordNumber,uint8_t *Buffer);
RtStatus_t Freehandle(int32_t HandleNumber);
RtStatus_t GetChar(uint8_t *Buffer,int32_t *offset);
void PutChar(uint8_t *Buffer,int32_t *offset,int32_t Char);
RtStatus_t SetcurrentPos(int32_t HandleNumber,int32_t RecordNumber);
RtStatus_t DiscardTrailigPeriodsw(uint8_t *Buffer,int32_t length,int32_t index);
RtStatus_t DiscardTrailigPeriods(uint8_t *Buffer,int32_t length,int32_t index,int32_t flag);
RtStatus_t Strcpyw(uint8_t *filepath, uint8_t *file_path1,int32_t length, int32_t index);
RtStatus_t IsShortNameValid(uint8_t *Buffer,int32_t length,int32_t index);
RtStatus_t Strcpy(uint8_t *filepath, uint8_t *file_path1,int32_t length, int32_t index);
void Setshortfilename(int32_t HandleNumber,uint8_t *Buffer,uint8_t *shortfilename);
RtStatus_t FindfreeRecord(int32_t Handlenumber,int32_t count);
int32_t CheckspaceinRootdir(int32_t Handlenumber,int32_t count);
void ArrangeFileName(uint8_t *Buffer,uint8_t *ShortFileName);
RtStatus_t ArrangeLongFileName(int32_t HandleNumber,uint8_t *filename,int32_t count,int32_t chksum);
RtStatus_t ChkSum(uint8_t *filename);

RtStatus_t CreateShortDirRecord
(
  uint8_t *filename,
  int32_t HandleNumber,
  int32_t ClusterNumber,
  int32_t DirAttr,
  int32_t FileSize
);

RtStatus_t Getname(uint8_t *filepath, int32_t currentPosition);
RtStatus_t GetnameW(uint8_t *filepath,int32_t currentPosition);
RtStatus_t GetNewcluster(int32_t Handlenumber);
RtStatus_t ClearCluster(int32_t HandleNumber);

int32_t ClearCluster_GrowFile(int32_t HandleNumber);

RtStatus_t FindNextSector(int32_t Device,int32_t HandleNumber);
int32_t Findnextcluster(int32_t DeviceNum,int32_t clusterno);
int32_t Firstsectorofcluster(int32_t DeviceNum,int32_t clusterno);
RtStatus_t Changecase(int32_t wordno);
RtStatus_t Shortdirmatch(int32_t HandleNumber,int32_t RecordNo,uint8_t *shortname,uint8_t *file,uint8_t *buf,int32_t Flag,
                                          int32_t lenght,int32_t index,uint8_t *Buffer);
RtStatus_t Longdirmatch(int32_t HandleNumber,int32_t RecordNo,uint8_t *file,int32_t length,int32_t index,int32_t stringtype);
void UnicodeToOEM(uint8_t *file,uint8_t *shortname,int32_t length,int32_t index);
void Uppercase(uint8_t *file);
int32_t Searchdirectory(int32_t HandleNumber,uint8_t *file,int32_t stringtype,int32_t Flag,int32_t length,int32_t index,uint8_t *Buffer,bool bSearchFlag,int32_t *pLastRecordnum);
RtStatus_t Convert_itoa(int32_t Number,uint8_t *string);
void Setfilename(uint8_t *buf, uint8_t *buffer_1);
RtStatus_t UpdateHandle(int32_t HandleNumber,int32_t clusterno);
RtStatus_t SetHandleforsearch(int32_t HandleNumber,uint8_t *filepath,int32_t stringtype,int32_t *index);
RtStatus_t Changepath(int32_t HandleNumber,uint8_t *filepath,int32_t stringtype,int32_t startposition,int32_t index);
RtStatus_t Extractfilename(uint8_t *filepath,int32_t length, int32_t *index);
int32_t ExtractPath(uint8_t *filepath,int32_t *index);
int32_t ExtractPathW(uint8_t *filepath,int32_t *index);
RtStatus_t FlushSector(int32_t deviceNumber, int32_t sectorNumber,int32_t WriteType,int32_t ix,int32_t *pi32WriteFlag);

RtStatus_t Searchfreehandleallocate(void);
RtStatus_t Isdirectoryempty( int32_t Handlenumber);
RtStatus_t DeleteRecord(int32_t HandleNumber, int32_t RecordNo);
RtStatus_t DeleteContent(int32_t HandleNumber, int32_t bUseVestigialClusterEraser);
RtStatus_t Fcreate(int32_t HandleNumber,uint8_t *FileName,int32_t stringtype,int32_t length,int32_t index);
RtStatus_t Updatehandlemode(int32_t HandleNumber,int32_t Mode);
int32_t Gethandlemode(int32_t HandleNumber);
FileSystemModeTypes_t IsHandleWriteAllocated(int32_t HandleNumber);
RtStatus_t UpdateFileSize(int32_t HandleNumber,int32_t flag);
RtStatus_t Extractfilenamew(uint8_t *filepath, int32_t *index);
RtStatus_t Isfileopen(int32_t HandleNumber);
RtStatus_t UpdateHandleOffsets(int32_t HandleNumber);

int32_t FATsectorno(int32_t DeviceNum,int32_t clusterno,int32_t *FATNtryoffset);
uint8_t *ReadFAT12Entry(int32_t DeviceNum,int32_t *FATsectorNo,int32_t FATntryoffset,int32_t clusterNum,uint8_t *buf,int32_t *FATentry, uint32_t * cacheToken);
RtStatus_t WriteFATentry(int32_t DeviceNum,int32_t FATsector,int32_t FATNtryoffset,int32_t clusterno,int32_t writentry);
uint8_t *FirstfreeAndallocateFAT32(int32_t DeviceNum,int32_t FATsectrono,int32_t FAToffset ,uint8_t *buf, int32_t *ClusterNo, uint32_t cacheToken);
int32_t ReadFATentry(int32_t Devicenum,int32_t FATsector,int32_t FATNtryoffset,int32_t clusterno);
int32_t FindnextFreecurrentcluster(int32_t DeviceNum,int32_t clusterno);
int32_t FirstfreeAndallocate(int32_t DeviceNum);
RtStatus_t firstfreeandallocate_ClearAllocationsForDevice( int32_t DeviceNum );

RtStatus_t GetUnicodeWord(uint8_t *Buffer,int32_t LFNOffset);
RtStatus_t IsCurrWorkDir(int32_t HandleNumber);
RtStatus_t MatchdirRecordW(int32_t HandleNumber,int32_t RecordNo, uint8_t *file,uint8_t *buf,int32_t index,int32_t length,uint8_t *Shortnamebuf);
RtStatus_t ChangeToRootdirectory(int32_t HandleNumber);
int32_t Totalfreecluster(int32_t DeviceNum);
int32_t TotalfreeclusterFAT16(int32_t DeviceNum);

RtStatus_t CreateDirRecord
(
  uint8_t *filepath,
  int32_t HandleNumber,
  int32_t ClusterNumber,
  int32_t DirAttr,
  int32_t stringtype,
  int32_t length,
  int32_t index,
  uint8_t *Buffer,
  int32_t FileSize
);

RtStatus_t Fread_BypassCache(int32_t i32HandleNumber, uint8_t *pBuffer, int32_t i32NumBytesToRead);
                         
int32_t Extractdirnamew(uint8_t *filepath,int32_t strlength,int32_t *index);
RtStatus_t SetcwdW(uint8_t *filepath, uint8_t *gCworkingDir,int32_t index,int32_t length);

void EnterNonReentrantSection(void);
void LeaveNonReentrantSection(void);

int64_t ReadDirectoryRecord(int32_t HandleNumber,int32_t RecordNumber,uint8_t *Buffer);

void FSClearDriveBuf(int32_t DriveNumber, int32_t maxhandles);

RtStatus_t Cleardevicerecord(int32_t DeviceNum);
RtStatus_t GetDeviceFromHandle(int32_t HandleNumber, int32_t *pDeviceNumber);

RtStatus_t  Readdevicerecord(int32_t Device,int32_t sectornum);
RtStatus_t  FileSystemPresent(int32_t Device);
RtStatus_t  FileSystemBootSectorVerify( uint8_t* buf );

void SeekPoint_InitializeBuffer(int32_t HandleNumber);