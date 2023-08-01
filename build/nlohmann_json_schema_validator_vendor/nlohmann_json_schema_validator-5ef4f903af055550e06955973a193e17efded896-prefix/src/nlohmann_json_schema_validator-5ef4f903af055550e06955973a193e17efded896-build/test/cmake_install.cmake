# Install script for directory: /home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896/test

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-build/test/JSON-Schema-Test-Suite/cmake_install.cmake")
  include("/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-build/test/cmake-install/cmake_install.cmake")
  include("/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-build/test/issue-100/cmake_install.cmake")
  include("/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-build/test/issue-101/cmake_install.cmake")
  include("/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-build/test/issue-12/cmake_install.cmake")
  include("/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-build/test/issue-27/cmake_install.cmake")
  include("/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-build/test/issue-48/cmake_install.cmake")
  include("/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-build/test/issue-54/cmake_install.cmake")
  include("/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-build/test/issue-75/cmake_install.cmake")
  include("/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-build/test/issue-9/cmake_install.cmake")
  include("/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-build/test/issue-93/cmake_install.cmake")
  include("/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-build/test/issue-96/cmake_install.cmake")

endif()

