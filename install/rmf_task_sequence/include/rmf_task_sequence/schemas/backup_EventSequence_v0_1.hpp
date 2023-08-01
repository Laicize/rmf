/*
 * This file is automatically generated by the build system of 
 *
 * Automatically generated files do not have a copyright
 */

#ifndef RMF_TASK_SEQUENCE__SCHEMAS__BACKUP_EVENTSEQUENCE_V0_1
#define RMF_TASK_SEQUENCE__SCHEMAS__BACKUP_EVENTSEQUENCE_V0_1

#include <nlohmann/json.hpp>

namespace rmf_task_sequence {
namespace schemas {

static const nlohmann::json backup_EventSequence_v0_1 =
R"raw_schema(
{
  "$schema": "https://json-schema.org/draft/2020-12/schema",
  "$id": "https://open-rmf.org/rmf_task_sequence/backup_EventSequence/0.1",
  "title": "Event Sequence Backup",
  "description": "A backup state for a sequence of events",
  "properties": {
    "schema_version": {
      "description": "The version of the Event Sequence schema being used",
      "const": "0.1"
    },
    "current_event": {
      "description": "The current event in the sequence when the backup occurred",
      "properties": {
        "index": {
          "description": "The index of the current phase within the sequence",
          "type": "integer",
          "minimum": 0
        },
        "state": {
          "description": "The serialized state of the backed up current event"
        }
      },
      "required": [ "index", "state" ]
    }
  },
  "required": [ "schema_version", "current_event" ]
}
)raw_schema"_json;

} // namespace schemas
} // namespace rmf_task_sequence

#endif // RMF_TASK_SEQUENCE__SCHEMAS__BACKUP_EVENTSEQUENCE_V0_1
