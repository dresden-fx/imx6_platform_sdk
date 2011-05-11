usage()
{
	echo "Build script for the MX28 OBDS project."
	echo
	echo "Usage: build_mx28.sh [Optionally specify OBDS Base Directory e.g. /home/user/diag-obds]"
	echo " If OBDS Base Directory not specified, works with current directory"
	exit 1
}

if [ "$1" = -help ]; then
    usage
fi

if [ $# -lt 1 ]; then
    script_dir=$PWD
else
    script_dir=$1
fi

#Save the working dir
curr_working_dir=$PWD

if [ -d $script_dir ]; then
    cd $script_dir
else
    echo "Invalid directory specified as OBDS Base Directory"
    echo
    echo "$script_name:"
    usage
fi

make TARGET=mx28 BOARD=evk

cd $script_dir/output/mx28/bin
dd if=diag-obds-mx28evk.bin of=ipl bs=2048 iflag=binary oflag=binary count=1

cd $script_dir/tools/windows
./elftosb -V -z -f mx28 -p "\." -c ../../src/mx28/mx28evk_mmcsd.bd -o ../../output/mx28/bin/mx28-obds.sb

echo This is to use cfimager to program the ipl.sb into the mmc card.
echo Note: use -a option only for the first time when format is needed.
echo     cfimager.exe -f ./output/mx28/bin/mx28-obds.sb -d g 
