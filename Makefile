#-------------------------------------------------------------------------------
# Copyright (C) 2012 Freescale Semiconductor, Inc. All Rights Reserved.
#
# THIS SOFTWARE IS PROVIDED BY FREESCALE "AS IS" AND ANY EXPRESS OR IMPLIED
# WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
# MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
# SHALL FREESCALE BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
# EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
# OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
# INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
# CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
# IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
# OF SUCH DAMAGE.
#-------------------------------------------------------------------------------

#
# Top-level Makefile.
#
# This file is responsible for building all libraries and applications.
#
# Targets:
#  - all
#  - sdk
#  - board
#  - sdk_unit_test
#  - power_modes_test
#  - clean
#  - clean_sdk
#  - clean_board
#  - clean_sdk_unit_test
#  - clean_power_modes_test
#
# The clean targets work with any combination of configuration variables. For
# example, clean_sdk with TARGET set will clean libsdk for only that TARGET, while
# clean_sdk without TARGET set will clean libsdk in all targets.
#

include mk/common.mk

# Library subdirectories that the apps depend upon. Handled automatically by targets.mk.
SUBDIRS = \
    sdk \
    $(BOARD_ROOT)

# List of all applications to build. Applications must reside in the apps directory.
ALL_APPS = \
    sdk_unit_test \
    power_modes_test

# Default target.
.PHONY: all
all: $(ALL_APPS) ;

# App targets. All apps depend on the listed subdirectories.
.PHONY: ALL_APPS
$(ALL_APPS): $(SUBDIRS)
	@if [ -t 1 ]; then printf "\n$(color_build)Building$(color_default) $@...\n" ; \
	else printf "\nBuilding $@...\n" ; fi
	@$(MAKE) $(silent_make) -r -C apps/$@
	@printf "\nBuild of $@ passed for $(TARGET) $(BOARD) rev $(BOARD_REVISION)!\n\n"

# Print message before recursive into subdirs.
$(SUBDIRS)::
	@if [ -t 1 ]; then printf "\n$(color_build)Building$(color_default) $(@F)...\n" ; \
	else printf "\nBuilding $(@F)...\n" ; fi

# Target with a simple name for building the board package.
.PHONY: board
board: $(BOARD_ROOT)

# Target to clean everything.
.PHONY: clean
clean:
	@echo "Deleting output directory..."
	@rm -rf output
	@echo "done."

# Target to clean just the sdk library and objects.
.PHONY: clean_sdk
clean_sdk:
ifdef TARGET
	rm -rf $(LIBSDK) $(OUTPUT_ROOT)/lib/obj/sdk
else
	rm -rf $(SDK_ROOT)/output/*/lib/libsdk.a $(SDK_ROOT)/output/*/lib/obj/sdk
endif

# Target to clean the board library and objects.
.PHONY: clean_board
clean_board:
ifdef TARGET
 ifdef BOARD
	rm -rf $(LIBBOARD) $(OUTPUT_ROOT)/lib/obj/board_$(BOARD_WITH_REV)
 else
	rm -rf $(OUTPUT_ROOT)/lib/libboard* $(OUTPUT_ROOT)/lib/obj/board_*
 endif
else
	rm -rf $(SDK_ROOT)/output/*/lib/libboard* $(SDK_ROOT)/output/*/lib/obj/board_*
endif

# Set up targets to clean each of the applications. For an app "foo", the target to clean
# just that app is "clean_foo". If no TARGET is passed to make, the app is cleaned
# for all targets.
ALL_APP_CLEAN_TARGETS := $(addprefix clean_,$(ALL_APPS))
.PHONY: $(ALL_APP_CLEAN_TARGETS)
$(ALL_APP_CLEAN_TARGETS):
ifdef TARGET
 ifdef BOARD
  ifdef BOARD_REVISION
   ifdef BOARD_REVISION_IS_DEFAULT
# Clean all revs of the board.
	rm -rf $(OUTPUT_ROOT)/$(patsubst clean_%,%,$@)/$(BOARD)_rev_*
   else
# Specific rev specified so clean just that one rev.
	rm -rf $(OUTPUT_ROOT)/$(patsubst clean_%,%,$@)/$(BOARD_WITH_REV)
   endif
  else
# Clean all revs of the board.
	rm -rf $(OUTPUT_ROOT)/$(patsubst clean_%,%,$@)/$(BOARD)_rev_*
  endif
 else
# Clean all boards of the app.
	rm -rf $(OUTPUT_ROOT)/$(patsubst clean_%,%,$@)
 endif
else
# Clean all boards and targets of the app.
	rm -rf $(SDK_ROOT)/output/*/$(patsubst clean_%,%,$@)
endif

include mk/targets.mk