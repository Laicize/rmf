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
CMAKE_SOURCE_DIR = /home/wang/rmf_ws/src/demonstrations/rmf_demos/rmf_demos_maps

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wang/rmf_ws/build/rmf_demos_maps

# Utility rule file for generate_airport_terminal_crowdsim_ign.

# Include any custom commands dependencies for this target.
include CMakeFiles/generate_airport_terminal_crowdsim_ign.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/generate_airport_terminal_crowdsim_ign.dir/progress.make

CMakeFiles/generate_airport_terminal_crowdsim_ign: airport_terminal_crowdsim_ign

airport_terminal_crowdsim_ign: maps/airport_terminal_ign/airport_terminal.world
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/wang/rmf_ws/build/rmf_demos_maps/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating airport_terminal_crowdsim_ign"
	ros2 run rmf_building_map_tools building_crowdsim /home/wang/rmf_ws/src/demonstrations/rmf_demos/rmf_demos_maps/maps/airport_terminal/airport_terminal.building.yaml /home/wang/rmf_ws/build/rmf_demos_maps/maps/airport_terminal/config_resource/ /home/wang/rmf_ws/build/rmf_demos_maps/maps/airport_terminal_ign/airport_terminal.world

maps/airport_terminal_ign/airport_terminal.world: /home/wang/rmf_ws/src/demonstrations/rmf_demos/rmf_demos_maps/maps/airport_terminal/airport_terminal.building.yaml
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/wang/rmf_ws/build/rmf_demos_maps/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating maps/airport_terminal_ign/airport_terminal.world"
	ros2 run rmf_building_map_tools building_map_generator ignition /home/wang/rmf_ws/src/demonstrations/rmf_demos/rmf_demos_maps/maps/airport_terminal/airport_terminal.building.yaml /home/wang/rmf_ws/build/rmf_demos_maps/maps/airport_terminal_ign/airport_terminal.world /home/wang/rmf_ws/build/rmf_demos_maps/maps/airport_terminal_ign/models

generate_airport_terminal_crowdsim_ign: CMakeFiles/generate_airport_terminal_crowdsim_ign
generate_airport_terminal_crowdsim_ign: airport_terminal_crowdsim_ign
generate_airport_terminal_crowdsim_ign: maps/airport_terminal_ign/airport_terminal.world
generate_airport_terminal_crowdsim_ign: CMakeFiles/generate_airport_terminal_crowdsim_ign.dir/build.make
.PHONY : generate_airport_terminal_crowdsim_ign

# Rule to build all files generated by this target.
CMakeFiles/generate_airport_terminal_crowdsim_ign.dir/build: generate_airport_terminal_crowdsim_ign
.PHONY : CMakeFiles/generate_airport_terminal_crowdsim_ign.dir/build

CMakeFiles/generate_airport_terminal_crowdsim_ign.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/generate_airport_terminal_crowdsim_ign.dir/cmake_clean.cmake
.PHONY : CMakeFiles/generate_airport_terminal_crowdsim_ign.dir/clean

CMakeFiles/generate_airport_terminal_crowdsim_ign.dir/depend:
	cd /home/wang/rmf_ws/build/rmf_demos_maps && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wang/rmf_ws/src/demonstrations/rmf_demos/rmf_demos_maps /home/wang/rmf_ws/src/demonstrations/rmf_demos/rmf_demos_maps /home/wang/rmf_ws/build/rmf_demos_maps /home/wang/rmf_ws/build/rmf_demos_maps /home/wang/rmf_ws/build/rmf_demos_maps/CMakeFiles/generate_airport_terminal_crowdsim_ign.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/generate_airport_terminal_crowdsim_ign.dir/depend

