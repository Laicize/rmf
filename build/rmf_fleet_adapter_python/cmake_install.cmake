# Install script for directory: /home/wang/rmf_ws/src/rmf/rmf_ros2/rmf_fleet_adapter_python

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/wang/rmf_ws/install/rmf_fleet_adapter_python")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python/site-packages/rmf_adapter.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python/site-packages/rmf_adapter.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python/site-packages/rmf_adapter.cpython-310-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python/site-packages" TYPE SHARED_LIBRARY FILES "/home/wang/rmf_ws/build/rmf_fleet_adapter_python/rmf_adapter.cpython-310-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python/site-packages/rmf_adapter.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python/site-packages/rmf_adapter.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python/site-packages/rmf_adapter.cpython-310-x86_64-linux-gnu.so"
         OLD_RPATH "/home/wang/rmf_ws/install/rmf_fleet_adapter/lib:/home/wang/rmf_ws/install/rmf_task_sequence/lib:/home/wang/rmf_ws/install/rmf_task/lib:/home/wang/rmf_ws/install/rmf_battery/lib:/home/wang/rmf_ws/install/rmf_task_ros2/lib:/home/wang/rmf_ws/install/rmf_traffic_ros2/lib:/home/wang/rmf_ws/install/rmf_traffic_msgs/lib:/home/wang/rmf_ws/install/rmf_site_map_msgs/lib:/home/wang/rmf_ws/install/rmf_building_map_msgs/lib:/home/wang/rmf_ws/install/rmf_traffic/lib:/opt/ros/humble/lib:/home/wang/rmf_ws/install/rmf_fleet_msgs/lib:/home/wang/rmf_ws/install/rmf_dispenser_msgs/lib:/home/wang/rmf_ws/install/rmf_task_msgs/lib:/home/wang/rmf_ws/install/rmf_websocket/lib:/home/wang/rmf_ws/install/rmf_utils/lib:/home/wang/rmf_ws/install/nlohmann_json_schema_validator_vendor/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python/site-packages/rmf_adapter.cpython-310-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rmf_fleet_adapter_python/environment" TYPE FILE FILES "/home/wang/rmf_ws/build/rmf_fleet_adapter_python/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rmf_fleet_adapter_python/environment" TYPE FILE FILES "/home/wang/rmf_ws/build/rmf_fleet_adapter_python/ament_cmake_environment_hooks/pythonpath.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python/site-packages/rmf_fleet_adapter_python-2.1.6-py3.10.egg-info" TYPE DIRECTORY FILES "/home/wang/rmf_ws/build/rmf_fleet_adapter_python/ament_cmake_python/rmf_fleet_adapter_python/rmf_fleet_adapter_python.egg-info/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python/site-packages/rmf_fleet_adapter_python" TYPE DIRECTORY FILES "/home/wang/rmf_ws/src/rmf/rmf_ros2/rmf_fleet_adapter_python/rmf_fleet_adapter_python/" REGEX "/[^/]*\\.pyc$" EXCLUDE REGEX "/\\_\\_pycache\\_\\_$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3.10" "-m" "compileall"
        "/home/wang/rmf_ws/install/rmf_fleet_adapter_python/lib/python/site-packages/rmf_fleet_adapter_python"
      )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/rmf_fleet_adapter_python" TYPE PROGRAM FILES
    "/home/wang/rmf_ws/src/rmf/rmf_ros2/rmf_fleet_adapter_python/scripts/test_adapter.py"
    "/home/wang/rmf_ws/src/rmf/rmf_ros2/rmf_fleet_adapter_python/scripts/test_utils.py"
    "/home/wang/rmf_ws/src/rmf/rmf_ros2/rmf_fleet_adapter_python/scripts/test_loop.py"
    "/home/wang/rmf_ws/src/rmf/rmf_ros2/rmf_fleet_adapter_python/scripts/test_delivery.py"
    "/home/wang/rmf_ws/src/rmf/rmf_ros2/rmf_fleet_adapter_python/scripts/rmf_msg_observer.py"
    "/home/wang/rmf_ws/src/rmf/rmf_ros2/rmf_fleet_adapter_python/scripts/traffic_light.py"
    "/home/wang/rmf_ws/src/rmf/rmf_ros2/rmf_fleet_adapter_python/scripts/schedule_blockade_nodes.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/wang/rmf_ws/build/rmf_fleet_adapter_python/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/rmf_fleet_adapter_python")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/wang/rmf_ws/build/rmf_fleet_adapter_python/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/rmf_fleet_adapter_python")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rmf_fleet_adapter_python/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rmf_fleet_adapter_python/environment" TYPE FILE FILES "/home/wang/rmf_ws/build/rmf_fleet_adapter_python/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rmf_fleet_adapter_python/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rmf_fleet_adapter_python/environment" TYPE FILE FILES "/home/wang/rmf_ws/build/rmf_fleet_adapter_python/ament_cmake_environment_hooks/path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rmf_fleet_adapter_python" TYPE FILE FILES "/home/wang/rmf_ws/build/rmf_fleet_adapter_python/ament_cmake_environment_hooks/local_setup.bash")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rmf_fleet_adapter_python" TYPE FILE FILES "/home/wang/rmf_ws/build/rmf_fleet_adapter_python/ament_cmake_environment_hooks/local_setup.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rmf_fleet_adapter_python" TYPE FILE FILES "/home/wang/rmf_ws/build/rmf_fleet_adapter_python/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rmf_fleet_adapter_python" TYPE FILE FILES "/home/wang/rmf_ws/build/rmf_fleet_adapter_python/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rmf_fleet_adapter_python" TYPE FILE FILES "/home/wang/rmf_ws/build/rmf_fleet_adapter_python/ament_cmake_environment_hooks/package.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/wang/rmf_ws/build/rmf_fleet_adapter_python/ament_cmake_index/share/ament_index/resource_index/packages/rmf_fleet_adapter_python")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rmf_fleet_adapter_python/cmake" TYPE FILE FILES
    "/home/wang/rmf_ws/build/rmf_fleet_adapter_python/ament_cmake_core/rmf_fleet_adapter_pythonConfig.cmake"
    "/home/wang/rmf_ws/build/rmf_fleet_adapter_python/ament_cmake_core/rmf_fleet_adapter_pythonConfig-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rmf_fleet_adapter_python" TYPE FILE FILES "/home/wang/rmf_ws/src/rmf/rmf_ros2/rmf_fleet_adapter_python/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/wang/rmf_ws/build/rmf_fleet_adapter_python/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
