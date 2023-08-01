# CMake generated Testfile for 
# Source directory: /home/wang/rmf_ws/src/rmf/rmf_traffic/rmf_traffic
# Build directory: /home/wang/rmf_ws/build/rmf_traffic
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_rmf_traffic "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/wang/rmf_ws/build/rmf_traffic/test_results/rmf_traffic/test_rmf_traffic.catch2.xml" "--package-name" "rmf_traffic" "--output-file" "/home/wang/rmf_ws/build/rmf_traffic/ament_cmake_catch2/test_rmf_traffic.txt" "--command" "/home/wang/rmf_ws/build/rmf_traffic/test_rmf_traffic" "-r junit" "-o /home/wang/rmf_ws/build/rmf_traffic/test_results/rmf_traffic/test_rmf_traffic.catch2.xml")
set_tests_properties(test_rmf_traffic PROPERTIES  LABELS "catch2" REQUIRED_FILES "/home/wang/rmf_ws/build/rmf_traffic/test_rmf_traffic" TIMEOUT "300" WORKING_DIRECTORY "/home/wang/rmf_ws/build/rmf_traffic" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/wang/rmf_ws/install/ament_cmake_catch2/share/ament_cmake_catch2/cmake/ament_add_catch2_test.cmake;87;ament_add_test;/home/wang/rmf_ws/install/ament_cmake_catch2/share/ament_cmake_catch2/cmake/ament_add_catch2.cmake;84;ament_add_catch2_test;/home/wang/rmf_ws/src/rmf/rmf_traffic/rmf_traffic/CMakeLists.txt;58;ament_add_catch2;/home/wang/rmf_ws/src/rmf/rmf_traffic/rmf_traffic/CMakeLists.txt;0;")
subdirs("thirdparty/fcl")
