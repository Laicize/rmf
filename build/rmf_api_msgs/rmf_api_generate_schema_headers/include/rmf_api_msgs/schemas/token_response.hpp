/*
 * This file is automatically generated by the build system of 
 *
 * Automatically generated files do not have a copyright
 */

#ifndef RMF_API_MSGS__SCHEMAS__TOKEN_RESPONSE
#define RMF_API_MSGS__SCHEMAS__TOKEN_RESPONSE

#include <nlohmann/json.hpp>

namespace rmf_api_msgs {
namespace schemas {

static const nlohmann::json token_response =
R"raw_schema(
{
  "$schema": "https://json-schema.org/draft/2020-12/schema",
  "$id": "https://raw.githubusercontent.com/open-rmf/rmf_api_msgs/main/rmf_api_msgs/schemas/token_response.json",
  "title": "Token Response",
  "description": "Template for defining a response message that provides a token upon success or errors upon failure",
  "type": "object",
  "oneOf": [
    {
      "properties": {
        "success": { "$ref": "#/$defs/success" },
        "token": {
          "description": "A token for the request. The value of this token is unique within the scope of this request and can be used by other requests to reference this request.",
          "type": "string"
        }
      },
      "required": ["success", "token"]
    },
    {
      "properties": {
        "success": { "$ref": "#/$defs/failure" },
        "errors": {
          "description": "Any error messages explaining why the request failed.",
          "type": "array",
          "items": { "$ref": "error.json" }
        }
      },
      "required": ["success", "errors"]
    }
  ],
  "$defs": {
    "success": {
      "description": "The request was successful",
      "type": "boolean",
      "enum": [true]
    },
    "failure": {
      "description": "The request failed",
      "type": "boolean",
      "enum": [false]
    }
  }
}
)raw_schema"_json;

} // namespace schemas
} // namespace rmf_api_msgs

#endif // RMF_API_MSGS__SCHEMAS__TOKEN_RESPONSE
