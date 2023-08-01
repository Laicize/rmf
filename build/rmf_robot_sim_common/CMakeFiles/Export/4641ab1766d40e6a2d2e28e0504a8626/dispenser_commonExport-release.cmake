#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rmf_robot_sim_common::dispenser_common" for configuration "Release"
set_property(TARGET rmf_robot_sim_common::dispenser_common APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_robot_sim_common::dispenser_common PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libdispenser_common.so"
  IMPORTED_SONAME_RELEASE "libdispenser_common.so"
  )

list(APPEND _cmake_import_check_targets rmf_robot_sim_common::dispenser_common )
list(APPEND _cmake_import_check_files_for_rmf_robot_sim_common::dispenser_common "${_IMPORT_PREFIX}/lib/libdispenser_common.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
