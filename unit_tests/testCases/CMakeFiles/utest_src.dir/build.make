# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/adrian/hobbies/c++/games/point-scoring/unit_tests

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/adrian/hobbies/c++/games/point-scoring/unit_tests

# Include any dependencies generated for this target.
include testCases/CMakeFiles/utest_src.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include testCases/CMakeFiles/utest_src.dir/compiler_depend.make

# Include the progress variables for this target.
include testCases/CMakeFiles/utest_src.dir/progress.make

# Include the compile flags for this target's objects.
include testCases/CMakeFiles/utest_src.dir/flags.make

testCases/CMakeFiles/utest_src.dir/testInput.cpp.o: testCases/CMakeFiles/utest_src.dir/flags.make
testCases/CMakeFiles/utest_src.dir/testInput.cpp.o: testCases/testInput.cpp
testCases/CMakeFiles/utest_src.dir/testInput.cpp.o: testCases/CMakeFiles/utest_src.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adrian/hobbies/c++/games/point-scoring/unit_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object testCases/CMakeFiles/utest_src.dir/testInput.cpp.o"
	cd /home/adrian/hobbies/c++/games/point-scoring/unit_tests/testCases && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT testCases/CMakeFiles/utest_src.dir/testInput.cpp.o -MF CMakeFiles/utest_src.dir/testInput.cpp.o.d -o CMakeFiles/utest_src.dir/testInput.cpp.o -c /home/adrian/hobbies/c++/games/point-scoring/unit_tests/testCases/testInput.cpp

testCases/CMakeFiles/utest_src.dir/testInput.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/utest_src.dir/testInput.cpp.i"
	cd /home/adrian/hobbies/c++/games/point-scoring/unit_tests/testCases && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adrian/hobbies/c++/games/point-scoring/unit_tests/testCases/testInput.cpp > CMakeFiles/utest_src.dir/testInput.cpp.i

testCases/CMakeFiles/utest_src.dir/testInput.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/utest_src.dir/testInput.cpp.s"
	cd /home/adrian/hobbies/c++/games/point-scoring/unit_tests/testCases && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adrian/hobbies/c++/games/point-scoring/unit_tests/testCases/testInput.cpp -o CMakeFiles/utest_src.dir/testInput.cpp.s

testCases/CMakeFiles/utest_src.dir/testPlayer.cpp.o: testCases/CMakeFiles/utest_src.dir/flags.make
testCases/CMakeFiles/utest_src.dir/testPlayer.cpp.o: testCases/testPlayer.cpp
testCases/CMakeFiles/utest_src.dir/testPlayer.cpp.o: testCases/CMakeFiles/utest_src.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adrian/hobbies/c++/games/point-scoring/unit_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object testCases/CMakeFiles/utest_src.dir/testPlayer.cpp.o"
	cd /home/adrian/hobbies/c++/games/point-scoring/unit_tests/testCases && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT testCases/CMakeFiles/utest_src.dir/testPlayer.cpp.o -MF CMakeFiles/utest_src.dir/testPlayer.cpp.o.d -o CMakeFiles/utest_src.dir/testPlayer.cpp.o -c /home/adrian/hobbies/c++/games/point-scoring/unit_tests/testCases/testPlayer.cpp

testCases/CMakeFiles/utest_src.dir/testPlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/utest_src.dir/testPlayer.cpp.i"
	cd /home/adrian/hobbies/c++/games/point-scoring/unit_tests/testCases && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adrian/hobbies/c++/games/point-scoring/unit_tests/testCases/testPlayer.cpp > CMakeFiles/utest_src.dir/testPlayer.cpp.i

testCases/CMakeFiles/utest_src.dir/testPlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/utest_src.dir/testPlayer.cpp.s"
	cd /home/adrian/hobbies/c++/games/point-scoring/unit_tests/testCases && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adrian/hobbies/c++/games/point-scoring/unit_tests/testCases/testPlayer.cpp -o CMakeFiles/utest_src.dir/testPlayer.cpp.s

# Object files for target utest_src
utest_src_OBJECTS = \
"CMakeFiles/utest_src.dir/testInput.cpp.o" \
"CMakeFiles/utest_src.dir/testPlayer.cpp.o"

# External object files for target utest_src
utest_src_EXTERNAL_OBJECTS =

testCases/libutest_src.a: testCases/CMakeFiles/utest_src.dir/testInput.cpp.o
testCases/libutest_src.a: testCases/CMakeFiles/utest_src.dir/testPlayer.cpp.o
testCases/libutest_src.a: testCases/CMakeFiles/utest_src.dir/build.make
testCases/libutest_src.a: testCases/CMakeFiles/utest_src.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/adrian/hobbies/c++/games/point-scoring/unit_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libutest_src.a"
	cd /home/adrian/hobbies/c++/games/point-scoring/unit_tests/testCases && $(CMAKE_COMMAND) -P CMakeFiles/utest_src.dir/cmake_clean_target.cmake
	cd /home/adrian/hobbies/c++/games/point-scoring/unit_tests/testCases && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/utest_src.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
testCases/CMakeFiles/utest_src.dir/build: testCases/libutest_src.a
.PHONY : testCases/CMakeFiles/utest_src.dir/build

testCases/CMakeFiles/utest_src.dir/clean:
	cd /home/adrian/hobbies/c++/games/point-scoring/unit_tests/testCases && $(CMAKE_COMMAND) -P CMakeFiles/utest_src.dir/cmake_clean.cmake
.PHONY : testCases/CMakeFiles/utest_src.dir/clean

testCases/CMakeFiles/utest_src.dir/depend:
	cd /home/adrian/hobbies/c++/games/point-scoring/unit_tests && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adrian/hobbies/c++/games/point-scoring/unit_tests /home/adrian/hobbies/c++/games/point-scoring/unit_tests/testCases /home/adrian/hobbies/c++/games/point-scoring/unit_tests /home/adrian/hobbies/c++/games/point-scoring/unit_tests/testCases /home/adrian/hobbies/c++/games/point-scoring/unit_tests/testCases/CMakeFiles/utest_src.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : testCases/CMakeFiles/utest_src.dir/depend

