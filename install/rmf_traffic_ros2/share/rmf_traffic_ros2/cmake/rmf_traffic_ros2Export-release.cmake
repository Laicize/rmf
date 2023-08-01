#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rmf_traffic_ros2::rmf_traffic_ros2" for configuration "Release"
set_property(TARGET rmf_traffic_ros2::rmf_traffic_ros2 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_traffic_ros2::rmf_traffic_ros2 PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librmf_traffic_ros2.so"
  IMPORTED_SONAME_RELEASE "librmf_traffic_ros2.so"
  )

list(APPEND _cmake_import_check_targets rmf_traffic_ros2::rmf_traffic_ros2 )
list(APPEND _cmake_import_check_files_for_rmf_traffic_ros2::rmf_traffic_ros2 "${_IMPORT_PREFIX}/lib/librmf_traffic_ros2.so" )

# Import target "rmf_traffic_ros2::rmf_traffic_schedule" for configuration "Release"
set_property(TARGET rmf_traffic_ros2::rmf_traffic_schedule APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_traffic_ros2::rmf_traffic_schedule PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/rmf_traffic_ros2/rmf_traffic_schedule"
  )

list(APPEND _cmake_import_check_targets rmf_traffic_ros2::rmf_traffic_schedule )
list(APPEND _cmake_import_check_files_for_rmf_traffic_ros2::rmf_traffic_schedule "${_IMPORT_PREFIX}/lib/rmf_traffic_ros2/rmf_traffic_schedule" )

# Import target "rmf_traffic_ros2::rmf_traffic_schedule_monitor" for configuration "Release"
set_property(TARGET rmf_traffic_ros2::rmf_traffic_schedule_monitor APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_traffic_ros2::rmf_traffic_schedule_monitor PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/rmf_traffic_ros2/rmf_traffic_schedule_monitor"
  )

list(APPEND _cmake_import_check_targets rmf_traffic_ros2::rmf_traffic_schedule_monitor )
list(APPEND _cmake_import_check_files_for_rmf_traffic_ros2::rmf_traffic_schedule_monitor "${_IMPORT_PREFIX}/lib/rmf_traffic_ros2/rmf_traffic_schedule_monitor" )

# Import target "rmf_traffic_ros2::rmf_traffic_blockade" for configuration "Release"
set_property(TARGET rmf_traffic_ros2::rmf_traffic_blockade APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_traffic_ros2::rmf_traffic_blockade PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/rmf_traffic_ros2/rmf_traffic_blockade"
  )

list(APPEND _cmake_import_check_targets rmf_traffic_ros2::rmf_traffic_blockade )
list(APPEND _cmake_import_check_files_for_rmf_traffic_ros2::rmf_traffic_blockade "${_IMPORT_PREFIX}/lib/rmf_traffic_ros2/rmf_traffic_blockade" )

# Import target "rmf_traffic_ros2::update_participant" for configuration "Release"
set_property(TARGET rmf_traffic_ros2::update_participant APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_traffic_ros2::update_participant PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/rmf_traffic_ros2/update_participant"
  )

list(APPEND _cmake_import_check_targets rmf_traffic_ros2::update_participant )
list(APPEND _cmake_import_check_files_for_rmf_traffic_ros2::update_participant "${_IMPORT_PREFIX}/lib/rmf_traffic_ros2/update_participant" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
