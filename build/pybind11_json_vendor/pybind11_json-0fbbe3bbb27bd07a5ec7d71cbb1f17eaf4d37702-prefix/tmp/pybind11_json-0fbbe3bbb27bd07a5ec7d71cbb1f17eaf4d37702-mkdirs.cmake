# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/wang/rmf_ws/build/pybind11_json_vendor/pybind11_json-0fbbe3bbb27bd07a5ec7d71cbb1f17eaf4d37702-prefix/src/pybind11_json-0fbbe3bbb27bd07a5ec7d71cbb1f17eaf4d37702"
  "/home/wang/rmf_ws/build/pybind11_json_vendor/pybind11_json-0fbbe3bbb27bd07a5ec7d71cbb1f17eaf4d37702-prefix/src/pybind11_json-0fbbe3bbb27bd07a5ec7d71cbb1f17eaf4d37702-build"
  "/home/wang/rmf_ws/build/pybind11_json_vendor/pybind11_json"
  "/home/wang/rmf_ws/build/pybind11_json_vendor/pybind11_json-0fbbe3bbb27bd07a5ec7d71cbb1f17eaf4d37702-prefix/tmp"
  "/home/wang/rmf_ws/build/pybind11_json_vendor/pybind11_json-0fbbe3bbb27bd07a5ec7d71cbb1f17eaf4d37702-prefix/src/pybind11_json-0fbbe3bbb27bd07a5ec7d71cbb1f17eaf4d37702-stamp"
  "/home/wang/rmf_ws/build/pybind11_json_vendor/pybind11_json-0fbbe3bbb27bd07a5ec7d71cbb1f17eaf4d37702-prefix/src"
  "/home/wang/rmf_ws/build/pybind11_json_vendor/pybind11_json-0fbbe3bbb27bd07a5ec7d71cbb1f17eaf4d37702-prefix/src/pybind11_json-0fbbe3bbb27bd07a5ec7d71cbb1f17eaf4d37702-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/wang/rmf_ws/build/pybind11_json_vendor/pybind11_json-0fbbe3bbb27bd07a5ec7d71cbb1f17eaf4d37702-prefix/src/pybind11_json-0fbbe3bbb27bd07a5ec7d71cbb1f17eaf4d37702-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/wang/rmf_ws/build/pybind11_json_vendor/pybind11_json-0fbbe3bbb27bd07a5ec7d71cbb1f17eaf4d37702-prefix/src/pybind11_json-0fbbe3bbb27bd07a5ec7d71cbb1f17eaf4d37702-stamp${cfgdir}") # cfgdir has leading slash
endif()
