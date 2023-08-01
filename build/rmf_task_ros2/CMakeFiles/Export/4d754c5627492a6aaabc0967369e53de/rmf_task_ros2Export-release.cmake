#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rmf_task_ros2::rmf_task_ros2" for configuration "Release"
set_property(TARGET rmf_task_ros2::rmf_task_ros2 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_task_ros2::rmf_task_ros2 PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librmf_task_ros2.so"
  IMPORTED_SONAME_RELEASE "librmf_task_ros2.so"
  )

list(APPEND _cmake_import_check_targets rmf_task_ros2::rmf_task_ros2 )
list(APPEND _cmake_import_check_files_for_rmf_task_ros2::rmf_task_ros2 "${_IMPORT_PREFIX}/lib/librmf_task_ros2.so" )

# Import target "rmf_task_ros2::rmf_task_dispatcher" for configuration "Release"
set_property(TARGET rmf_task_ros2::rmf_task_dispatcher APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_task_ros2::rmf_task_dispatcher PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/rmf_task_ros2/rmf_task_dispatcher"
  )

list(APPEND _cmake_import_check_targets rmf_task_ros2::rmf_task_dispatcher )
list(APPEND _cmake_import_check_files_for_rmf_task_ros2::rmf_task_dispatcher "${_IMPORT_PREFIX}/lib/rmf_task_ros2/rmf_task_dispatcher" )

# Import target "rmf_task_ros2::rmf_bidder_node" for configuration "Release"
set_property(TARGET rmf_task_ros2::rmf_bidder_node APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_task_ros2::rmf_bidder_node PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/rmf_task_ros2/rmf_bidder_node"
  )

list(APPEND _cmake_import_check_targets rmf_task_ros2::rmf_bidder_node )
list(APPEND _cmake_import_check_files_for_rmf_task_ros2::rmf_bidder_node "${_IMPORT_PREFIX}/lib/rmf_task_ros2/rmf_bidder_node" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
