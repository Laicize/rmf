/*
 * This file is automatically generated by the build system of 
 *
 * Automatically generated files do not have a copyright
 */

#ifndef RMF_API_MSGS__SCHEMAS__FLEET_LOG_REQUEST
#define RMF_API_MSGS__SCHEMAS__FLEET_LOG_REQUEST

#include <nlohmann/json.hpp>

namespace rmf_api_msgs {
namespace schemas {

static const nlohmann::json fleet_log_request =
R"raw_schema(
{
  "$schema": "https://json-schema.org/draft/2020-12/schema",
  "$id": "https://raw.githubusercontent.com/open-rmf/rmf_api_msgs/main/rmf_api_msgs/schemas/fleet_log_request.json",
  "title": "Fleet Log Request",
  "description": "Request the event log for a fleet",
  "type": "object",
  "properties": {
    "type": {
      "description": "Indicate that this is a fleet log request",
      "type": "string",
      "enum": ["fleet_log_request"]
    },
    "fleet": {
      "description": "Specify the name of the fleet whose log should be fetched",
      "type": "string"
    }
  },
  "required": ["type", "fleet"]
}
)raw_schema"_json;

} // namespace schemas
} // namespace rmf_api_msgs

#endif // RMF_API_MSGS__SCHEMAS__FLEET_LOG_REQUEST