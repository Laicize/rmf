# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /home/wang/.local/lib/python3.10/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/wang/.local/lib/python3.10/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/wang/rmf_ws/src/demonstrations/rmf_demos/rmf_demos_dashboard_resources

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wang/rmf_ws/build/rmf_demos_dashboard_resources

# Utility rule file for build.

# Include any custom commands dependencies for this target.
include CMakeFiles/build.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/build.dir/progress.make

CMakeFiles/build: /home/wang/rmf_ws/src/demonstrations/rmf_demos/rmf_demos_dashboard_resources/airport_terminal/main.json
CMakeFiles/build: /home/wang/rmf_ws/src/demonstrations/rmf_demos/rmf_demos_dashboard_resources/office/main.json

/home/wang/rmf_ws/src/demonstrations/rmf_demos/rmf_demos_dashboard_resources/airport_terminal/main.json: /home/wang/rmf_ws/src/demonstrations/rmf_demos/rmf_demos_dashboard_resources/airport_terminal/dashboard_config.json
/home/wang/rmf_ws/src/demonstrations/rmf_demos/rmf_demos_dashboard_resources/airport_terminal/main.json: /home/wang/rmf_ws/src/demonstrations/rmf_demos/rmf_demos_dashboard_resources/clinic/dashboard_config.json
/home/wang/rmf_ws/src/demonstrations/rmf_demos/rmf_demos_dashboard_resources/airport_terminal/main.json: /home/wang/rmf_ws/src/demonstrations/rmf_demos/rmf_demos_dashboard_resources/hotel/dashboard_config.json
/home/wang/rmf_ws/src/demonstrations/rmf_demos/rmf_demos_dashboard_resources/airport_terminal/main.json: /home/wang/rmf_ws/src/demonstrations/rmf_demos/rmf_demos_dashboard_resources/office/dashboard_config.json
/home/wang/rmf_ws/src/demonstrations/rmf_demos/rmf_demos_dashboard_resources/airport_terminal/main.json: /home/wang/rmf_ws/src/demonstrations/rmf_demos/rmf_demos_dashboard_resources/build_configuration.py
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/wang/rmf_ws/build/rmf_demos_dashboard_resources/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating /home/wang/rmf_ws/src/demonstrations/rmf_demos/rmf_demos_dashboard_resources/airport_terminal/main.json, /home/wang/rmf_ws/src/demonstrations/rmf_demos/rmf_demos_dashboard_resources/office/main.json"
	cd /home/wang/rmf_ws/src/demonstrations/rmf_demos/rmf_demos_dashboard_resources && python3 build_configuration.py

/home/wang/rmf_ws/src/demonstrations/rmf_demos/rmf_demos_dashboard_resources/office/main.json: /home/wang/rmf_ws/src/demonstrations/rmf_demos/rmf_demos_dashboard_resources/airport_terminal/main.json
	@$(CMAKE_COMMAND) -E touch_nocreate /home/wang/rmf_ws/src/demonstrations/rmf_demos/rmf_demos_dashboard_resources/office/main.json

build: CMakeFiles/build
build: /home/wang/rmf_ws/src/demonstrations/rmf_demos/rmf_demos_dashboard_resources/airport_terminal/main.json
build: /home/wang/rmf_ws/src/demonstrations/rmf_demos/rmf_demos_dashboard_resources/office/main.json
build: CMakeFiles/build.dir/build.make
.PHONY : build

# Rule to build all files generated by this target.
CMakeFiles/build.dir/build: build
.PHONY : CMakeFiles/build.dir/build

CMakeFiles/build.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/build.dir/cmake_clean.cmake
.PHONY : CMakeFiles/build.dir/clean

CMakeFiles/build.dir/depend:
	cd /home/wang/rmf_ws/build/rmf_demos_dashboard_resources && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wang/rmf_ws/src/demonstrations/rmf_demos/rmf_demos_dashboard_resources /home/wang/rmf_ws/src/demonstrations/rmf_demos/rmf_demos_dashboard_resources /home/wang/rmf_ws/build/rmf_demos_dashboard_resources /home/wang/rmf_ws/build/rmf_demos_dashboard_resources /home/wang/rmf_ws/build/rmf_demos_dashboard_resources/CMakeFiles/build.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/build.dir/depend

