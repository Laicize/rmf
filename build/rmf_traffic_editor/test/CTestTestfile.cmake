# CMake generated Testfile for 
# Source directory: /home/wang/rmf_ws/src/rmf/rmf_traffic_editor/rmf_traffic_editor/test
# Build directory: /home/wang/rmf_ws/build/rmf_traffic_editor/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_gui "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/wang/rmf_ws/build/rmf_traffic_editor/test_results/rmf_traffic_editor/test_gui.xml" "--package-name" "rmf_traffic_editor" "--output-file" "/home/wang/rmf_ws/build/rmf_traffic_editor/test_results/rmf_traffic_editor/test_gui/output.log" "--command" "/home/wang/rmf_ws/build/rmf_traffic_editor/test/test_gui" "-o" "/home/wang/rmf_ws/build/rmf_traffic_editor/test_results/rmf_traffic_editor/test_gui.xml,xml" "-o" "-,txt")
set_tests_properties(test_gui PROPERTIES  TIMEOUT "60" WORKING_DIRECTORY "/home/wang/rmf_ws/build/rmf_traffic_editor/test" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/wang/rmf_ws/src/rmf/rmf_traffic_editor/rmf_traffic_editor/test/CMakeLists.txt;12;ament_add_test;/home/wang/rmf_ws/src/rmf/rmf_traffic_editor/rmf_traffic_editor/test/CMakeLists.txt;0;")
