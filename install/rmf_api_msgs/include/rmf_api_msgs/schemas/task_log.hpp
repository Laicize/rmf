/*
 * This file is automatically generated by the build system of 
 *
 * Automatically generated files do not have a copyright
 */

#ifndef RMF_API_MSGS__SCHEMAS__TASK_LOG
#define RMF_API_MSGS__SCHEMAS__TASK_LOG

#include <nlohmann/json.hpp>

namespace rmf_api_msgs {
namespace schemas {

static const nlohmann::json task_log =
R"raw_schema(
{
  "$schema": "https://json-schema.org/draft/2020-12/schema",
  "$id": "https://raw.githubusercontent.com/open-rmf/rmf_api_msgs/main/rmf_api_msgs/schemas/task_log.json",
  "title": "Task Event Log",
  "description": "Log information for a task",
  "type": "object",
  "properties": {
    "task_id": { "type": "string" },
    "log": {
      "description": "Log entries related to the overall task",
      "type": "array",
      "items": { "$ref": "log_entry.json" }
    },
    "phases": {
      "description": "A dictionary whose keys (property names) are the indices of a phase",
      "type": "object",
      "additionalProperties": {
        "type": "object",
        "properties": {
          "log": {
            "description": "Log entries related to the overall phase",
            "type": "array",
            "items": { "$ref": "log_entry.json" }
          },
          "events": {
            "description": "A dictionary whose keys (property names) are the indices of an event in the phase",
            "type": "object",
            "additionalProperties": {
              "type": "array",
              "items": { "$ref": "log_entry.json" }
            }
          }
        },
        "additionalProperties": false
      }
    }
  },
  "additionalProperties": false,
  "required": ["task_id"]
}
)raw_schema"_json;

} // namespace schemas
} // namespace rmf_api_msgs

#endif // RMF_API_MSGS__SCHEMAS__TASK_LOG
