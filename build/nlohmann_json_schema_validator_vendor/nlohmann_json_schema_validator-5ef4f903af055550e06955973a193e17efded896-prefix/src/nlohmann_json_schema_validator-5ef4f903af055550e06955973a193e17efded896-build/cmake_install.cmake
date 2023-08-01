# Install script for directory: /home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/json_external_project/install")
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
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnlohmann_json_schema_validator.so.2.1.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnlohmann_json_schema_validator.so.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-build/libnlohmann_json_schema_validator.so.2.1.1"
    "/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-build/libnlohmann_json_schema_validator.so.1"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnlohmann_json_schema_validator.so.2.1.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnlohmann_json_schema_validator.so.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnlohmann_json_schema_validator.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnlohmann_json_schema_validator.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnlohmann_json_schema_validator.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-build/libnlohmann_json_schema_validator.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnlohmann_json_schema_validator.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnlohmann_json_schema_validator.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnlohmann_json_schema_validator.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/nlohmann" TYPE FILE FILES "/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896/src/nlohmann/json-schema.hpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/json-schema-validate" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/json-schema-validate")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/json-schema-validate"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-build/json-schema-validate")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/json-schema-validate" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/json-schema-validate")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/json-schema-validate"
         OLD_RPATH "/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-build:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/json-schema-validate")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/readme-json-schema" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/readme-json-schema")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/readme-json-schema"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-build/readme-json-schema")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/readme-json-schema" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/readme-json-schema")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/readme-json-schema"
         OLD_RPATH "/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-build:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/readme-json-schema")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/nlohmann_json_schema_validator/nlohmann_json_schema_validatorTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/nlohmann_json_schema_validator/nlohmann_json_schema_validatorTargets.cmake"
         "/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-build/CMakeFiles/Export/14108deeabf795d015d170175a37bcfe/nlohmann_json_schema_validatorTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/nlohmann_json_schema_validator/nlohmann_json_schema_validatorTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/nlohmann_json_schema_validator/nlohmann_json_schema_validatorTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/nlohmann_json_schema_validator" TYPE FILE FILES "/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-build/CMakeFiles/Export/14108deeabf795d015d170175a37bcfe/nlohmann_json_schema_validatorTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/nlohmann_json_schema_validator" TYPE FILE FILES "/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-build/CMakeFiles/Export/14108deeabf795d015d170175a37bcfe/nlohmann_json_schema_validatorTargets-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/nlohmann_json_schema_validator" TYPE FILE FILES
    "/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-build/nlohmann_json_schema_validatorConfig.cmake"
    "/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-build/nlohmann_json_schema_validatorConfigVersion.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-build/test/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
