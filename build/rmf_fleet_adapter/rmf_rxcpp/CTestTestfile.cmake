# CMake generated Testfile for 
# Source directory: /home/wang/rmf_ws/src/rmf/rmf_ros2/rmf_fleet_adapter/rmf_rxcpp
# Build directory: /home/wang/rmf_ws/build/rmf_fleet_adapter/rmf_rxcpp
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_rmf_rxcpp "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/wang/rmf_ws/build/rmf_fleet_adapter/test_results/rmf_fleet_adapter/test_rmf_rxcpp.catch2.xml" "--package-name" "rmf_fleet_adapter" "--output-file" "/home/wang/rmf_ws/build/rmf_fleet_adapter/ament_cmake_catch2/test_rmf_rxcpp.txt" "--command" "/home/wang/rmf_ws/build/rmf_fleet_adapter/rmf_rxcpp/test_rmf_rxcpp" "-r junit" "-o /home/wang/rmf_ws/build/rmf_fleet_adapter/test_results/rmf_fleet_adapter/test_rmf_rxcpp.catch2.xml")
set_tests_properties(test_rmf_rxcpp PROPERTIES  LABELS "catch2" REQUIRED_FILES "/home/wang/rmf_ws/build/rmf_fleet_adapter/rmf_rxcpp/test_rmf_rxcpp" TIMEOUT "60" WORKING_DIRECTORY "/home/wang/rmf_ws/build/rmf_fleet_adapter/rmf_rxcpp" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/wang/rmf_ws/install/ament_cmake_catch2/share/ament_cmake_catch2/cmake/ament_add_catch2_test.cmake;87;ament_add_test;/home/wang/rmf_ws/install/ament_cmake_catch2/share/ament_cmake_catch2/cmake/ament_add_catch2.cmake;84;ament_add_catch2_test;/home/wang/rmf_ws/src/rmf/rmf_ros2/rmf_fleet_adapter/rmf_rxcpp/CMakeLists.txt;36;ament_add_catch2;/home/wang/rmf_ws/src/rmf/rmf_ros2/rmf_fleet_adapter/rmf_rxcpp/CMakeLists.txt;0;")
