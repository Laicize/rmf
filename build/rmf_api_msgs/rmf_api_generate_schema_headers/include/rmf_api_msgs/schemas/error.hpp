/*
 * This file is automatically generated by the build system of 
 *
 * Automatically generated files do not have a copyright
 */

#ifndef RMF_API_MSGS__SCHEMAS__ERROR
#define RMF_API_MSGS__SCHEMAS__ERROR

#include <nlohmann/json.hpp>

namespace rmf_api_msgs {
namespace schemas {

static const nlohmann::json error =
R"raw_schema(
{
  "$schema": "https://json-schema.org/draft/2020-12/schema",
  "$id": "https://raw.githubusercontent.com/open-rmf/rmf_api_msgs/main/rmf_api_msgs/schemas/error.json",
  "title": "Error",
  "description": "Description of an error that has occurred while handling a request",
  "type": "object",
  "properties": {
    "code": {
      "description": "A standard code for the kind of error that has occurred",
      "type": "integer",
      "minimum": 0
    },
    "category": {
      "description": "The category of the error",
      "type": "string"
    },
    "detail": {
      "description": "Details about the error",
      "type": "string"
    }
  }
}
)raw_schema"_json;

} // namespace schemas
} // namespace rmf_api_msgs

#endif // RMF_API_MSGS__SCHEMAS__ERROR
