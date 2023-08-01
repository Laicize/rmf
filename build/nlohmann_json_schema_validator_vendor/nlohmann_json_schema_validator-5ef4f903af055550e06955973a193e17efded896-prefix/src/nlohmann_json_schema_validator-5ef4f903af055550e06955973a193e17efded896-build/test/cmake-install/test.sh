#!/bin/bash

## Configure, build, install, and test json-schema-validator with CMAKE
## This script is instantiated via configure_file() to run cmake the same the original build has been invoked.

set -xe

EXTRA_ARGS=$@
SRC_DIR=/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896
BUILD_DIR=/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-build/test/cmake-install/build-dir
INSTALL_DIR=/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-build/test/cmake-install/install-dir
NLOHMANN_JSON_DIR=/usr/lib/cmake/nlohmann_json
TEST_SRC_DIR=/home/wang/rmf_ws/build/nlohmann_json_schema_validator_vendor/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896-prefix/src/nlohmann_json_schema_validator-5ef4f903af055550e06955973a193e17efded896/test/cmake-install/project

cmake --version

# Clear out build directory
rm -rf ${BUILD_DIR}
# Create build-dir
mkdir -p ${BUILD_DIR}
cd ${BUILD_DIR}

# configure json-schema-validator
printf "\n-----------------------------------------------------------\n"
printf "Configuring, building, and installing json-schema-validator"
printf "\n-----------------------------------------------------------\n"
cmake \
    -DCMAKE_INSTALL_PREFIX:PATH=${INSTALL_DIR} \
    -Dnlohmann_json_DIR:PATH=${NLOHMANN_JSON_DIR} \
    ${EXTRA_ARGS} \
    ${SRC_DIR}

CPU_COUNT=$(nproc)

# Build and install json-schema-validator
cmake --build . -- -j${CPU_COUNT}
cmake --build . --target install -- -j${CPU_COUNT}

# Make sure build directory is empty
rm -rf ./*

# configure test project
printf "\n-----------------------------------------------------------\n"
printf "Configuring, building, and running test project"
printf "\n-----------------------------------------------------------\n"
cmake \
    -Dnlohmann_json_DIR:PATH=${NLOHMANN_JSON_DIR} \
	-Dnlohmann_json_schema_validator_DIR:PATH=${INSTALL_DIR}/lib/cmake/nlohmann_json_schema_validator \
    -DVALIDATOR_INSTALL_DIR:PATH=${INSTALL_DIR} \
    ${EXTRA_ARGS} \
    ${TEST_SRC_DIR}

# Build test project and test
cmake --build .
ctest --output-on-failure
