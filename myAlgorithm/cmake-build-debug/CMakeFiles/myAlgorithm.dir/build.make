# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /usr/bin/cmake.exe

# The command to remove a file.
RM = /usr/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/d/C1/G3/算法设计与课程/myAlgorithm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/d/C1/G3/算法设计与课程/myAlgorithm/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/myAlgorithm.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/myAlgorithm.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/myAlgorithm.dir/flags.make

CMakeFiles/myAlgorithm.dir/main.cpp.o: CMakeFiles/myAlgorithm.dir/flags.make
CMakeFiles/myAlgorithm.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/C1/G3/算法设计与课程/myAlgorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/myAlgorithm.dir/main.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myAlgorithm.dir/main.cpp.o -c /cygdrive/d/C1/G3/算法设计与课程/myAlgorithm/main.cpp

CMakeFiles/myAlgorithm.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myAlgorithm.dir/main.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/C1/G3/算法设计与课程/myAlgorithm/main.cpp > CMakeFiles/myAlgorithm.dir/main.cpp.i

CMakeFiles/myAlgorithm.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myAlgorithm.dir/main.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/C1/G3/算法设计与课程/myAlgorithm/main.cpp -o CMakeFiles/myAlgorithm.dir/main.cpp.s

CMakeFiles/myAlgorithm.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/myAlgorithm.dir/main.cpp.o.requires

CMakeFiles/myAlgorithm.dir/main.cpp.o.provides: CMakeFiles/myAlgorithm.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/myAlgorithm.dir/build.make CMakeFiles/myAlgorithm.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/myAlgorithm.dir/main.cpp.o.provides

CMakeFiles/myAlgorithm.dir/main.cpp.o.provides.build: CMakeFiles/myAlgorithm.dir/main.cpp.o


# Object files for target myAlgorithm
myAlgorithm_OBJECTS = \
"CMakeFiles/myAlgorithm.dir/main.cpp.o"

# External object files for target myAlgorithm
myAlgorithm_EXTERNAL_OBJECTS =

myAlgorithm.exe: CMakeFiles/myAlgorithm.dir/main.cpp.o
myAlgorithm.exe: CMakeFiles/myAlgorithm.dir/build.make
myAlgorithm.exe: CMakeFiles/myAlgorithm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/d/C1/G3/算法设计与课程/myAlgorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable myAlgorithm.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/myAlgorithm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/myAlgorithm.dir/build: myAlgorithm.exe

.PHONY : CMakeFiles/myAlgorithm.dir/build

CMakeFiles/myAlgorithm.dir/requires: CMakeFiles/myAlgorithm.dir/main.cpp.o.requires

.PHONY : CMakeFiles/myAlgorithm.dir/requires

CMakeFiles/myAlgorithm.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/myAlgorithm.dir/cmake_clean.cmake
.PHONY : CMakeFiles/myAlgorithm.dir/clean

CMakeFiles/myAlgorithm.dir/depend:
	cd /cygdrive/d/C1/G3/算法设计与课程/myAlgorithm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/d/C1/G3/算法设计与课程/myAlgorithm /cygdrive/d/C1/G3/算法设计与课程/myAlgorithm /cygdrive/d/C1/G3/算法设计与课程/myAlgorithm/cmake-build-debug /cygdrive/d/C1/G3/算法设计与课程/myAlgorithm/cmake-build-debug /cygdrive/d/C1/G3/算法设计与课程/myAlgorithm/cmake-build-debug/CMakeFiles/myAlgorithm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/myAlgorithm.dir/depend

