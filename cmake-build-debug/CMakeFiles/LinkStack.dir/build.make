# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\Software\apps\CLion\ch-0\201.6668.10\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = D:\Software\apps\CLion\ch-0\201.6668.10\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\mozhe\Desktop\C++ Direction Class\AG-Practice"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\mozhe\Desktop\C++ Direction Class\AG-Practice\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/LinkStack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LinkStack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LinkStack.dir/flags.make

CMakeFiles/LinkStack.dir/LinkStack/main.c.obj: CMakeFiles/LinkStack.dir/flags.make
CMakeFiles/LinkStack.dir/LinkStack/main.c.obj: ../LinkStack/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\mozhe\Desktop\C++ Direction Class\AG-Practice\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/LinkStack.dir/LinkStack/main.c.obj"
	D:\Software\Qt\Tools\mingw730_64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\LinkStack.dir\LinkStack\main.c.obj   -c "C:\Users\mozhe\Desktop\C++ Direction Class\AG-Practice\LinkStack\main.c"

CMakeFiles/LinkStack.dir/LinkStack/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LinkStack.dir/LinkStack/main.c.i"
	D:\Software\Qt\Tools\mingw730_64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\mozhe\Desktop\C++ Direction Class\AG-Practice\LinkStack\main.c" > CMakeFiles\LinkStack.dir\LinkStack\main.c.i

CMakeFiles/LinkStack.dir/LinkStack/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LinkStack.dir/LinkStack/main.c.s"
	D:\Software\Qt\Tools\mingw730_64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\mozhe\Desktop\C++ Direction Class\AG-Practice\LinkStack\main.c" -o CMakeFiles\LinkStack.dir\LinkStack\main.c.s

CMakeFiles/LinkStack.dir/LinkStack/LinkStack.c.obj: CMakeFiles/LinkStack.dir/flags.make
CMakeFiles/LinkStack.dir/LinkStack/LinkStack.c.obj: ../LinkStack/LinkStack.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\mozhe\Desktop\C++ Direction Class\AG-Practice\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/LinkStack.dir/LinkStack/LinkStack.c.obj"
	D:\Software\Qt\Tools\mingw730_64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\LinkStack.dir\LinkStack\LinkStack.c.obj   -c "C:\Users\mozhe\Desktop\C++ Direction Class\AG-Practice\LinkStack\LinkStack.c"

CMakeFiles/LinkStack.dir/LinkStack/LinkStack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LinkStack.dir/LinkStack/LinkStack.c.i"
	D:\Software\Qt\Tools\mingw730_64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\mozhe\Desktop\C++ Direction Class\AG-Practice\LinkStack\LinkStack.c" > CMakeFiles\LinkStack.dir\LinkStack\LinkStack.c.i

CMakeFiles/LinkStack.dir/LinkStack/LinkStack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LinkStack.dir/LinkStack/LinkStack.c.s"
	D:\Software\Qt\Tools\mingw730_64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\mozhe\Desktop\C++ Direction Class\AG-Practice\LinkStack\LinkStack.c" -o CMakeFiles\LinkStack.dir\LinkStack\LinkStack.c.s

# Object files for target LinkStack
LinkStack_OBJECTS = \
"CMakeFiles/LinkStack.dir/LinkStack/main.c.obj" \
"CMakeFiles/LinkStack.dir/LinkStack/LinkStack.c.obj"

# External object files for target LinkStack
LinkStack_EXTERNAL_OBJECTS =

LinkStack.exe: CMakeFiles/LinkStack.dir/LinkStack/main.c.obj
LinkStack.exe: CMakeFiles/LinkStack.dir/LinkStack/LinkStack.c.obj
LinkStack.exe: CMakeFiles/LinkStack.dir/build.make
LinkStack.exe: CMakeFiles/LinkStack.dir/linklibs.rsp
LinkStack.exe: CMakeFiles/LinkStack.dir/objects1.rsp
LinkStack.exe: CMakeFiles/LinkStack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\mozhe\Desktop\C++ Direction Class\AG-Practice\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable LinkStack.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\LinkStack.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LinkStack.dir/build: LinkStack.exe

.PHONY : CMakeFiles/LinkStack.dir/build

CMakeFiles/LinkStack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\LinkStack.dir\cmake_clean.cmake
.PHONY : CMakeFiles/LinkStack.dir/clean

CMakeFiles/LinkStack.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\mozhe\Desktop\C++ Direction Class\AG-Practice" "C:\Users\mozhe\Desktop\C++ Direction Class\AG-Practice" "C:\Users\mozhe\Desktop\C++ Direction Class\AG-Practice\cmake-build-debug" "C:\Users\mozhe\Desktop\C++ Direction Class\AG-Practice\cmake-build-debug" "C:\Users\mozhe\Desktop\C++ Direction Class\AG-Practice\cmake-build-debug\CMakeFiles\LinkStack.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/LinkStack.dir/depend

