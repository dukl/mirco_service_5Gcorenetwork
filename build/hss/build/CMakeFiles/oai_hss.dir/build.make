# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/build/hss

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/build/hss/build

# Include any dependencies generated for this target.
include CMakeFiles/oai_hss.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/oai_hss.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/oai_hss.dir/flags.make

CMakeFiles/oai_hss.dir/home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/src/oai_hss/hss_main.c.o: CMakeFiles/oai_hss.dir/flags.make
CMakeFiles/oai_hss.dir/home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/src/oai_hss/hss_main.c.o: /home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/src/oai_hss/hss_main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/build/hss/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/oai_hss.dir/home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/src/oai_hss/hss_main.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/oai_hss.dir/home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/src/oai_hss/hss_main.c.o   -c /home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/src/oai_hss/hss_main.c

CMakeFiles/oai_hss.dir/home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/src/oai_hss/hss_main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/oai_hss.dir/home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/src/oai_hss/hss_main.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/src/oai_hss/hss_main.c > CMakeFiles/oai_hss.dir/home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/src/oai_hss/hss_main.c.i

CMakeFiles/oai_hss.dir/home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/src/oai_hss/hss_main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/oai_hss.dir/home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/src/oai_hss/hss_main.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/src/oai_hss/hss_main.c -o CMakeFiles/oai_hss.dir/home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/src/oai_hss/hss_main.c.s

CMakeFiles/oai_hss.dir/home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/src/oai_hss/hss_main.c.o.requires:

.PHONY : CMakeFiles/oai_hss.dir/home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/src/oai_hss/hss_main.c.o.requires

CMakeFiles/oai_hss.dir/home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/src/oai_hss/hss_main.c.o.provides: CMakeFiles/oai_hss.dir/home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/src/oai_hss/hss_main.c.o.requires
	$(MAKE) -f CMakeFiles/oai_hss.dir/build.make CMakeFiles/oai_hss.dir/home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/src/oai_hss/hss_main.c.o.provides.build
.PHONY : CMakeFiles/oai_hss.dir/home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/src/oai_hss/hss_main.c.o.provides

CMakeFiles/oai_hss.dir/home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/src/oai_hss/hss_main.c.o.provides.build: CMakeFiles/oai_hss.dir/home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/src/oai_hss/hss_main.c.o


# Object files for target oai_hss
oai_hss_OBJECTS = \
"CMakeFiles/oai_hss.dir/home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/src/oai_hss/hss_main.c.o"

# External object files for target oai_hss
oai_hss_EXTERNAL_OBJECTS =

oai_hss: CMakeFiles/oai_hss.dir/home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/src/oai_hss/hss_main.c.o
oai_hss: CMakeFiles/oai_hss.dir/build.make
oai_hss: libhss_access_restriction.a
oai_hss: libhss_auc.a
oai_hss: libhss_db.a
oai_hss: libhss_s6a.a
oai_hss: libhss_utils.a
oai_hss: /usr/lib/x86_64-linux-gnu/libmysqlclient.so
oai_hss: /usr/lib/x86_64-linux-gnu/libnettle.so
oai_hss: /usr/local/lib/libfdcore.so
oai_hss: /usr/local/lib/libfdproto.so
oai_hss: CMakeFiles/oai_hss.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/build/hss/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable oai_hss"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/oai_hss.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/oai_hss.dir/build: oai_hss

.PHONY : CMakeFiles/oai_hss.dir/build

CMakeFiles/oai_hss.dir/requires: CMakeFiles/oai_hss.dir/home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/src/oai_hss/hss_main.c.o.requires

.PHONY : CMakeFiles/oai_hss.dir/requires

CMakeFiles/oai_hss.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/oai_hss.dir/cmake_clean.cmake
.PHONY : CMakeFiles/oai_hss.dir/clean

CMakeFiles/oai_hss.dir/depend:
	cd /home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/build/hss/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/build/hss /home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/build/hss /home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/build/hss/build /home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/build/hss/build /home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/build/hss/build/CMakeFiles/oai_hss.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/oai_hss.dir/depend
