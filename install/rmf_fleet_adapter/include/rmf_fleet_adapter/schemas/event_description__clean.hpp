/*
 * This file is automatically generated by the build system of 
 *
 * Automatically generated files do not have a copyright
 */

#ifndef RMF_FLEET_ADAPTER__SCHEMAS__EVENT_DESCRIPTION__CLEAN
#define RMF_FLEET_ADAPTER__SCHEMAS__EVENT_DESCRIPTION__CLEAN

#include <nlohmann/json.hpp>

namespace rmf_fleet_adapter {
namespace schemas {

static const nlohmann::json event_description__clean =
R"raw_schema(
{
  "$schema": "https://json-schema.org/draft/2020-12/schema",
  "$id": "https://raw.githubusercontent.com/open-rmf/rmf_ros2/main/rmf_fleet_adapter/schemas/event_description__clean.json",
  "title": "Clean Event",
  "description": "Clean a zone",
  "type": "object",
  "properties": {
    "zone": { "type": "string" },
    "type": { "type": "string" }
  },
  "required": ["zone"]
}
)raw_schema"_json;

} // namespace schemas
} // namespace rmf_fleet_adapter

#endif // RMF_FLEET_ADAPTER__SCHEMAS__EVENT_DESCRIPTION__CLEAN