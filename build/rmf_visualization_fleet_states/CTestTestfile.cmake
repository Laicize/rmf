# CMake generated Testfile for 
# Source directory: /home/wang/rmf_ws/src/rmf/rmf_visualization/rmf_visualization_fleet_states
# Build directory: /home/wang/rmf_ws/build/rmf_visualization_fleet_states
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(uncrustify "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/wang/rmf_ws/build/rmf_visualization_fleet_states/test_results/rmf_visualization_fleet_states/uncrustify.xunit.xml" "--package-name" "rmf_visualization_fleet_states" "--output-file" "/home/wang/rmf_ws/build/rmf_visualization_fleet_states/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/humble/bin/ament_uncrustify" "--xunit-file" "/home/wang/rmf_ws/build/rmf_visualization_fleet_states/test_results/rmf_visualization_fleet_states/uncrustify.xunit.xml" "--linelength" "80" "-c" "/home/wang/rmf_ws/install/rmf_utils/share/rmf_utils/rmf_code_style.cfg" "ARGN" "src")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/wang/rmf_ws/src/rmf/rmf_visualization/rmf_visualization_fleet_states" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_uncrustify/cmake/ament_uncrustify.cmake;70;ament_add_test;/home/wang/rmf_ws/src/rmf/rmf_visualization/rmf_visualization_fleet_states/CMakeLists.txt;61;ament_uncrustify;/home/wang/rmf_ws/src/rmf/rmf_visualization/rmf_visualization_fleet_states/CMakeLists.txt;0;")
