
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was rmf_traffic-config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

get_filename_component(rmf_traffic_CMAKE_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)

include(CMakeFindDependencyMacro)

find_dependency(eigen3_cmake_module)
find_dependency(Eigen3)
find_dependency(rmf_utils)
find_dependency(Threads)

if(NOT TARGET rmf_traffic::rmf_traffic)
    include("${rmf_traffic_CMAKE_DIR}/rmf_traffic-targets.cmake")
endif()

list(APPEND rmf_traffic_INCLUDE_DIRS ${Eigen3_INCLUDE_DIRS})

check_required_components(rmf_traffic)
