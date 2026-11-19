// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from maintenance_interfaces:action/MaintenanceSession.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "maintenance_interfaces/action/maintenance_session.h"


#ifndef MAINTENANCE_INTERFACES__ACTION__DETAIL__MAINTENANCE_SESSION__STRUCT_H_
#define MAINTENANCE_INTERFACES__ACTION__DETAIL__MAINTENANCE_SESSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'service_floors'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/MaintenanceSession in the package maintenance_interfaces.
typedef struct maintenance_interfaces__action__MaintenanceSession_Goal
{
  rosidl_runtime_c__int32__Sequence service_floors;
} maintenance_interfaces__action__MaintenanceSession_Goal;

// Struct for a sequence of maintenance_interfaces__action__MaintenanceSession_Goal.
typedef struct maintenance_interfaces__action__MaintenanceSession_Goal__Sequence
{
  maintenance_interfaces__action__MaintenanceSession_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maintenance_interfaces__action__MaintenanceSession_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'report_path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/MaintenanceSession in the package maintenance_interfaces.
typedef struct maintenance_interfaces__action__MaintenanceSession_Result
{
  bool success;
  rosidl_runtime_c__String report_path;
} maintenance_interfaces__action__MaintenanceSession_Result;

// Struct for a sequence of maintenance_interfaces__action__MaintenanceSession_Result.
typedef struct maintenance_interfaces__action__MaintenanceSession_Result__Sequence
{
  maintenance_interfaces__action__MaintenanceSession_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maintenance_interfaces__action__MaintenanceSession_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'current_step'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/MaintenanceSession in the package maintenance_interfaces.
typedef struct maintenance_interfaces__action__MaintenanceSession_Feedback
{
  int32_t current_floor;
  rosidl_runtime_c__String current_step;
  float progress;
} maintenance_interfaces__action__MaintenanceSession_Feedback;

// Struct for a sequence of maintenance_interfaces__action__MaintenanceSession_Feedback.
typedef struct maintenance_interfaces__action__MaintenanceSession_Feedback__Sequence
{
  maintenance_interfaces__action__MaintenanceSession_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maintenance_interfaces__action__MaintenanceSession_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "maintenance_interfaces/action/detail/maintenance_session__struct.h"

/// Struct defined in action/MaintenanceSession in the package maintenance_interfaces.
typedef struct maintenance_interfaces__action__MaintenanceSession_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  maintenance_interfaces__action__MaintenanceSession_Goal goal;
} maintenance_interfaces__action__MaintenanceSession_SendGoal_Request;

// Struct for a sequence of maintenance_interfaces__action__MaintenanceSession_SendGoal_Request.
typedef struct maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence
{
  maintenance_interfaces__action__MaintenanceSession_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MaintenanceSession in the package maintenance_interfaces.
typedef struct maintenance_interfaces__action__MaintenanceSession_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} maintenance_interfaces__action__MaintenanceSession_SendGoal_Response;

// Struct for a sequence of maintenance_interfaces__action__MaintenanceSession_SendGoal_Response.
typedef struct maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence
{
  maintenance_interfaces__action__MaintenanceSession_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/MaintenanceSession in the package maintenance_interfaces.
typedef struct maintenance_interfaces__action__MaintenanceSession_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence request;
  maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence response;
} maintenance_interfaces__action__MaintenanceSession_SendGoal_Event;

// Struct for a sequence of maintenance_interfaces__action__MaintenanceSession_SendGoal_Event.
typedef struct maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__Sequence
{
  maintenance_interfaces__action__MaintenanceSession_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MaintenanceSession in the package maintenance_interfaces.
typedef struct maintenance_interfaces__action__MaintenanceSession_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} maintenance_interfaces__action__MaintenanceSession_GetResult_Request;

// Struct for a sequence of maintenance_interfaces__action__MaintenanceSession_GetResult_Request.
typedef struct maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence
{
  maintenance_interfaces__action__MaintenanceSession_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__struct.h"

/// Struct defined in action/MaintenanceSession in the package maintenance_interfaces.
typedef struct maintenance_interfaces__action__MaintenanceSession_GetResult_Response
{
  int8_t status;
  maintenance_interfaces__action__MaintenanceSession_Result result;
} maintenance_interfaces__action__MaintenanceSession_GetResult_Response;

// Struct for a sequence of maintenance_interfaces__action__MaintenanceSession_GetResult_Response.
typedef struct maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence
{
  maintenance_interfaces__action__MaintenanceSession_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  maintenance_interfaces__action__MaintenanceSession_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  maintenance_interfaces__action__MaintenanceSession_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/MaintenanceSession in the package maintenance_interfaces.
typedef struct maintenance_interfaces__action__MaintenanceSession_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence request;
  maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence response;
} maintenance_interfaces__action__MaintenanceSession_GetResult_Event;

// Struct for a sequence of maintenance_interfaces__action__MaintenanceSession_GetResult_Event.
typedef struct maintenance_interfaces__action__MaintenanceSession_GetResult_Event__Sequence
{
  maintenance_interfaces__action__MaintenanceSession_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maintenance_interfaces__action__MaintenanceSession_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__struct.h"

/// Struct defined in action/MaintenanceSession in the package maintenance_interfaces.
typedef struct maintenance_interfaces__action__MaintenanceSession_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  maintenance_interfaces__action__MaintenanceSession_Feedback feedback;
} maintenance_interfaces__action__MaintenanceSession_FeedbackMessage;

// Struct for a sequence of maintenance_interfaces__action__MaintenanceSession_FeedbackMessage.
typedef struct maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__Sequence
{
  maintenance_interfaces__action__MaintenanceSession_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAINTENANCE_INTERFACES__ACTION__DETAIL__MAINTENANCE_SESSION__STRUCT_H_
