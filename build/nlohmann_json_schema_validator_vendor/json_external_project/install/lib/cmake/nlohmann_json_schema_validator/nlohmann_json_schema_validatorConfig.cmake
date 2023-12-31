# Config file for the json-schema-validator
# It defines the following variables
#  NLOHMANN_JSON_SCHEMA_VALIDATOR_INCLUDE_DIRS - include directories for json-schema-validator
#  nlohmann_json_schema_validator              - json-schema-validator library to link against

# Compute paths
get_filename_component(NLOHMANN_JSON_SCHEMA_VALIDATOR_CMAKE_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
set(NLOHMANN_JSON_SCHEMA_VALIDATOR_INCLUDE_DIRS )

# Our library dependencies (contains definitions for IMPORTED targets)
if(NOT TARGET json-schema-validator)
    include("${NLOHMANN_JSON_SCHEMA_VALIDATOR_CMAKE_DIR}/nlohmann_json_schema_validatorTargets.cmake")
endif()
