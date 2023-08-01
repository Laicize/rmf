# CMake generated Testfile for 
# Source directory: /home/wang/rmf_ws/src/rmf/rmf_task/rmf_task
# Build directory: /home/wang/rmf_ws/build/rmf_task
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_rmf_task "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/wang/rmf_ws/build/rmf_task/test_results/rmf_task/test_rmf_task.catch2.xml" "--package-name" "rmf_task" "--output-file" "/home/wang/rmf_ws/build/rmf_task/ament_cmake_catch2/test_rmf_task.txt" "--command" "/home/wang/rmf_ws/build/rmf_task/test_rmf_task" "-r junit" "-o /home/wang/rmf_ws/build/rmf_task/test_results/rmf_task/test_rmf_task.catch2.xml")
set_tests_properties(test_rmf_task PROPERTIES  LABELS "catch2" REQUIRED_FILES "/home/wang/rmf_ws/build/rmf_task/test_rmf_task" TIMEOUT "300" WORKING_DIRECTORY "/home/wang/rmf_ws/build/rmf_task" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/wang/rmf_ws/install/ament_cmake_catch2/share/ament_cmake_catch2/cmake/ament_add_catch2_test.cmake;87;ament_add_test;/home/wang/rmf_ws/install/ament_cmake_catch2/share/ament_cmake_catch2/cmake/ament_add_catch2.cmake;84;ament_add_catch2_test;/home/wang/rmf_ws/src/rmf/rmf_task/rmf_task/CMakeLists.txt;58;ament_add_catch2;/home/wang/rmf_ws/src/rmf/rmf_task/rmf_task/CMakeLists.txt;0;")
add_test(uncrustify "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/wang/rmf_ws/build/rmf_task/test_results/rmf_task/uncrustify.xunit.xml" "--package-name" "rmf_task" "--output-file" "/home/wang/rmf_ws/build/rmf_task/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/humble/bin/ament_uncrustify" "--xunit-file" "/home/wang/rmf_ws/build/rmf_task/test_results/rmf_task/uncrustify.xunit.xml" "--linelength" "80" "-c" "/home/wang/rmf_ws/install/rmf_utils/share/rmf_utils/rmf_code_style.cfg" "ARGN" "include" "src" "test")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/wang/rmf_ws/src/rmf/rmf_task/rmf_task" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_uncrustify/cmake/ament_uncrustify.cmake;70;ament_add_test;/home/wang/rmf_ws/src/rmf/rmf_task/rmf_task/CMakeLists.txt;76;ament_uncrustify;/home/wang/rmf_ws/src/rmf/rmf_task/rmf_task/CMakeLists.txt;0;")