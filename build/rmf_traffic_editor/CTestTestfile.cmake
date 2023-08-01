# CMake generated Testfile for 
# Source directory: /home/wang/rmf_ws/src/rmf/rmf_traffic_editor/rmf_traffic_editor
# Build directory: /home/wang/rmf_ws/build/rmf_traffic_editor
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(uncrustify "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/wang/rmf_ws/build/rmf_traffic_editor/test_results/rmf_traffic_editor/uncrustify.xunit.xml" "--package-name" "rmf_traffic_editor" "--output-file" "/home/wang/rmf_ws/build/rmf_traffic_editor/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/humble/bin/ament_uncrustify" "--xunit-file" "/home/wang/rmf_ws/build/rmf_traffic_editor/test_results/rmf_traffic_editor/uncrustify.xunit.xml" "--linelength" "80" "-c" "/home/wang/rmf_ws/install/rmf_utils/share/rmf_utils/rmf_code_style.cfg" "--language" "CPP" "ARGN" "include" "gui")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/wang/rmf_ws/src/rmf/rmf_traffic_editor/rmf_traffic_editor" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_uncrustify/cmake/ament_uncrustify.cmake;70;ament_add_test;/home/wang/rmf_ws/src/rmf/rmf_traffic_editor/rmf_traffic_editor/CMakeLists.txt;167;ament_uncrustify;/home/wang/rmf_ws/src/rmf/rmf_traffic_editor/rmf_traffic_editor/CMakeLists.txt;0;")
subdirs("test")
