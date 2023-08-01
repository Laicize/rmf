/*
 * This file is automatically generated by the build system of 
 *
 * Automatically generated files do not have a copyright
 */

#ifndef RMF_API_MSGS__SCHEMAS__ACTIVITY_DISCOVERY_REQUEST
#define RMF_API_MSGS__SCHEMAS__ACTIVITY_DISCOVERY_REQUEST

#include <nlohmann/json.hpp>

namespace rmf_api_msgs {
namespace schemas {

static const nlohmann::json activity_discovery_request =
R"raw_schema(
{
  "$schema": "https://json-schema.org/draft/2020-12/schema",
  "$id": "https://raw.githubusercontent.com/open-rmf/rmf_api_msgs/main/rmf_api_msgs/schemas/activity_discovery_request.json",
  "title": "Activity Discovery Request",
  "description": "Ask for activities that can be performed by the fleets",
  "type": "object",
  "properties": {
    "type": {
      "description": "Indicate that this is an activity discovery request",
      "type": "string",
      "enum": ["activitiy_discovery_request"]
    }
  },
  "required": ["type"]
}
)raw_schema"_json;

} // namespace schemas
} // namespace rmf_api_msgs

#endif // RMF_API_MSGS__SCHEMAS__ACTIVITY_DISCOVERY_REQUEST
