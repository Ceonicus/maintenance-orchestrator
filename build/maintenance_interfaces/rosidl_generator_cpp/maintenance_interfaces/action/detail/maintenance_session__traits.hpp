// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from maintenance_interfaces:action/MaintenanceSession.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "maintenance_interfaces/action/maintenance_session.hpp"


#ifndef MAINTENANCE_INTERFACES__ACTION__DETAIL__MAINTENANCE_SESSION__TRAITS_HPP_
#define MAINTENANCE_INTERFACES__ACTION__DETAIL__MAINTENANCE_SESSION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "maintenance_interfaces/action/detail/maintenance_session__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace maintenance_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MaintenanceSession_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: service_floors
  {
    if (msg.service_floors.size() == 0) {
      out << "service_floors: []";
    } else {
      out << "service_floors: [";
      size_t pending_items = msg.service_floors.size();
      for (auto item : msg.service_floors) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MaintenanceSession_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: service_floors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.service_floors.size() == 0) {
      out << "service_floors: []\n";
    } else {
      out << "service_floors:\n";
      for (auto item : msg.service_floors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MaintenanceSession_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace maintenance_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use maintenance_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const maintenance_interfaces::action::MaintenanceSession_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  maintenance_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use maintenance_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const maintenance_interfaces::action::MaintenanceSession_Goal & msg)
{
  return maintenance_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<maintenance_interfaces::action::MaintenanceSession_Goal>()
{
  return "maintenance_interfaces::action::MaintenanceSession_Goal";
}

template<>
inline const char * name<maintenance_interfaces::action::MaintenanceSession_Goal>()
{
  return "maintenance_interfaces/action/MaintenanceSession_Goal";
}

template<>
struct has_fixed_size<maintenance_interfaces::action::MaintenanceSession_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<maintenance_interfaces::action::MaintenanceSession_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<maintenance_interfaces::action::MaintenanceSession_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace maintenance_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MaintenanceSession_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: report_path
  {
    out << "report_path: ";
    rosidl_generator_traits::value_to_yaml(msg.report_path, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MaintenanceSession_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: report_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "report_path: ";
    rosidl_generator_traits::value_to_yaml(msg.report_path, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MaintenanceSession_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace maintenance_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use maintenance_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const maintenance_interfaces::action::MaintenanceSession_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  maintenance_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use maintenance_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const maintenance_interfaces::action::MaintenanceSession_Result & msg)
{
  return maintenance_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<maintenance_interfaces::action::MaintenanceSession_Result>()
{
  return "maintenance_interfaces::action::MaintenanceSession_Result";
}

template<>
inline const char * name<maintenance_interfaces::action::MaintenanceSession_Result>()
{
  return "maintenance_interfaces/action/MaintenanceSession_Result";
}

template<>
struct has_fixed_size<maintenance_interfaces::action::MaintenanceSession_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<maintenance_interfaces::action::MaintenanceSession_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<maintenance_interfaces::action::MaintenanceSession_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace maintenance_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MaintenanceSession_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_floor
  {
    out << "current_floor: ";
    rosidl_generator_traits::value_to_yaml(msg.current_floor, out);
    out << ", ";
  }

  // member: current_step
  {
    out << "current_step: ";
    rosidl_generator_traits::value_to_yaml(msg.current_step, out);
    out << ", ";
  }

  // member: progress
  {
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MaintenanceSession_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_floor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_floor: ";
    rosidl_generator_traits::value_to_yaml(msg.current_floor, out);
    out << "\n";
  }

  // member: current_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_step: ";
    rosidl_generator_traits::value_to_yaml(msg.current_step, out);
    out << "\n";
  }

  // member: progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MaintenanceSession_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace maintenance_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use maintenance_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const maintenance_interfaces::action::MaintenanceSession_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  maintenance_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use maintenance_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const maintenance_interfaces::action::MaintenanceSession_Feedback & msg)
{
  return maintenance_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<maintenance_interfaces::action::MaintenanceSession_Feedback>()
{
  return "maintenance_interfaces::action::MaintenanceSession_Feedback";
}

template<>
inline const char * name<maintenance_interfaces::action::MaintenanceSession_Feedback>()
{
  return "maintenance_interfaces/action/MaintenanceSession_Feedback";
}

template<>
struct has_fixed_size<maintenance_interfaces::action::MaintenanceSession_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<maintenance_interfaces::action::MaintenanceSession_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<maintenance_interfaces::action::MaintenanceSession_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "maintenance_interfaces/action/detail/maintenance_session__traits.hpp"

namespace maintenance_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MaintenanceSession_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MaintenanceSession_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MaintenanceSession_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace maintenance_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use maintenance_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const maintenance_interfaces::action::MaintenanceSession_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  maintenance_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use maintenance_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const maintenance_interfaces::action::MaintenanceSession_SendGoal_Request & msg)
{
  return maintenance_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<maintenance_interfaces::action::MaintenanceSession_SendGoal_Request>()
{
  return "maintenance_interfaces::action::MaintenanceSession_SendGoal_Request";
}

template<>
inline const char * name<maintenance_interfaces::action::MaintenanceSession_SendGoal_Request>()
{
  return "maintenance_interfaces/action/MaintenanceSession_SendGoal_Request";
}

template<>
struct has_fixed_size<maintenance_interfaces::action::MaintenanceSession_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<maintenance_interfaces::action::MaintenanceSession_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<maintenance_interfaces::action::MaintenanceSession_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<maintenance_interfaces::action::MaintenanceSession_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<maintenance_interfaces::action::MaintenanceSession_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace maintenance_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MaintenanceSession_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MaintenanceSession_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MaintenanceSession_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace maintenance_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use maintenance_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const maintenance_interfaces::action::MaintenanceSession_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  maintenance_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use maintenance_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const maintenance_interfaces::action::MaintenanceSession_SendGoal_Response & msg)
{
  return maintenance_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<maintenance_interfaces::action::MaintenanceSession_SendGoal_Response>()
{
  return "maintenance_interfaces::action::MaintenanceSession_SendGoal_Response";
}

template<>
inline const char * name<maintenance_interfaces::action::MaintenanceSession_SendGoal_Response>()
{
  return "maintenance_interfaces/action/MaintenanceSession_SendGoal_Response";
}

template<>
struct has_fixed_size<maintenance_interfaces::action::MaintenanceSession_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<maintenance_interfaces::action::MaintenanceSession_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<maintenance_interfaces::action::MaintenanceSession_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace maintenance_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MaintenanceSession_SendGoal_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MaintenanceSession_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MaintenanceSession_SendGoal_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace maintenance_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use maintenance_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const maintenance_interfaces::action::MaintenanceSession_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  maintenance_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use maintenance_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const maintenance_interfaces::action::MaintenanceSession_SendGoal_Event & msg)
{
  return maintenance_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<maintenance_interfaces::action::MaintenanceSession_SendGoal_Event>()
{
  return "maintenance_interfaces::action::MaintenanceSession_SendGoal_Event";
}

template<>
inline const char * name<maintenance_interfaces::action::MaintenanceSession_SendGoal_Event>()
{
  return "maintenance_interfaces/action/MaintenanceSession_SendGoal_Event";
}

template<>
struct has_fixed_size<maintenance_interfaces::action::MaintenanceSession_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<maintenance_interfaces::action::MaintenanceSession_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<maintenance_interfaces::action::MaintenanceSession_SendGoal_Request>::value && has_bounded_size<maintenance_interfaces::action::MaintenanceSession_SendGoal_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<maintenance_interfaces::action::MaintenanceSession_SendGoal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<maintenance_interfaces::action::MaintenanceSession_SendGoal>()
{
  return "maintenance_interfaces::action::MaintenanceSession_SendGoal";
}

template<>
inline const char * name<maintenance_interfaces::action::MaintenanceSession_SendGoal>()
{
  return "maintenance_interfaces/action/MaintenanceSession_SendGoal";
}

template<>
struct has_fixed_size<maintenance_interfaces::action::MaintenanceSession_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<maintenance_interfaces::action::MaintenanceSession_SendGoal_Request>::value &&
    has_fixed_size<maintenance_interfaces::action::MaintenanceSession_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<maintenance_interfaces::action::MaintenanceSession_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<maintenance_interfaces::action::MaintenanceSession_SendGoal_Request>::value &&
    has_bounded_size<maintenance_interfaces::action::MaintenanceSession_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<maintenance_interfaces::action::MaintenanceSession_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<maintenance_interfaces::action::MaintenanceSession_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<maintenance_interfaces::action::MaintenanceSession_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace maintenance_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MaintenanceSession_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MaintenanceSession_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MaintenanceSession_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace maintenance_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use maintenance_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const maintenance_interfaces::action::MaintenanceSession_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  maintenance_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use maintenance_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const maintenance_interfaces::action::MaintenanceSession_GetResult_Request & msg)
{
  return maintenance_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<maintenance_interfaces::action::MaintenanceSession_GetResult_Request>()
{
  return "maintenance_interfaces::action::MaintenanceSession_GetResult_Request";
}

template<>
inline const char * name<maintenance_interfaces::action::MaintenanceSession_GetResult_Request>()
{
  return "maintenance_interfaces/action/MaintenanceSession_GetResult_Request";
}

template<>
struct has_fixed_size<maintenance_interfaces::action::MaintenanceSession_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<maintenance_interfaces::action::MaintenanceSession_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<maintenance_interfaces::action::MaintenanceSession_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__traits.hpp"

namespace maintenance_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MaintenanceSession_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MaintenanceSession_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MaintenanceSession_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace maintenance_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use maintenance_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const maintenance_interfaces::action::MaintenanceSession_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  maintenance_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use maintenance_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const maintenance_interfaces::action::MaintenanceSession_GetResult_Response & msg)
{
  return maintenance_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<maintenance_interfaces::action::MaintenanceSession_GetResult_Response>()
{
  return "maintenance_interfaces::action::MaintenanceSession_GetResult_Response";
}

template<>
inline const char * name<maintenance_interfaces::action::MaintenanceSession_GetResult_Response>()
{
  return "maintenance_interfaces/action/MaintenanceSession_GetResult_Response";
}

template<>
struct has_fixed_size<maintenance_interfaces::action::MaintenanceSession_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<maintenance_interfaces::action::MaintenanceSession_Result>::value> {};

template<>
struct has_bounded_size<maintenance_interfaces::action::MaintenanceSession_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<maintenance_interfaces::action::MaintenanceSession_Result>::value> {};

template<>
struct is_message<maintenance_interfaces::action::MaintenanceSession_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace maintenance_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MaintenanceSession_GetResult_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MaintenanceSession_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MaintenanceSession_GetResult_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace maintenance_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use maintenance_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const maintenance_interfaces::action::MaintenanceSession_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  maintenance_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use maintenance_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const maintenance_interfaces::action::MaintenanceSession_GetResult_Event & msg)
{
  return maintenance_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<maintenance_interfaces::action::MaintenanceSession_GetResult_Event>()
{
  return "maintenance_interfaces::action::MaintenanceSession_GetResult_Event";
}

template<>
inline const char * name<maintenance_interfaces::action::MaintenanceSession_GetResult_Event>()
{
  return "maintenance_interfaces/action/MaintenanceSession_GetResult_Event";
}

template<>
struct has_fixed_size<maintenance_interfaces::action::MaintenanceSession_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<maintenance_interfaces::action::MaintenanceSession_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<maintenance_interfaces::action::MaintenanceSession_GetResult_Request>::value && has_bounded_size<maintenance_interfaces::action::MaintenanceSession_GetResult_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<maintenance_interfaces::action::MaintenanceSession_GetResult_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<maintenance_interfaces::action::MaintenanceSession_GetResult>()
{
  return "maintenance_interfaces::action::MaintenanceSession_GetResult";
}

template<>
inline const char * name<maintenance_interfaces::action::MaintenanceSession_GetResult>()
{
  return "maintenance_interfaces/action/MaintenanceSession_GetResult";
}

template<>
struct has_fixed_size<maintenance_interfaces::action::MaintenanceSession_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<maintenance_interfaces::action::MaintenanceSession_GetResult_Request>::value &&
    has_fixed_size<maintenance_interfaces::action::MaintenanceSession_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<maintenance_interfaces::action::MaintenanceSession_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<maintenance_interfaces::action::MaintenanceSession_GetResult_Request>::value &&
    has_bounded_size<maintenance_interfaces::action::MaintenanceSession_GetResult_Response>::value
  >
{
};

template<>
struct is_service<maintenance_interfaces::action::MaintenanceSession_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<maintenance_interfaces::action::MaintenanceSession_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<maintenance_interfaces::action::MaintenanceSession_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__traits.hpp"

namespace maintenance_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MaintenanceSession_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MaintenanceSession_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MaintenanceSession_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace maintenance_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use maintenance_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const maintenance_interfaces::action::MaintenanceSession_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  maintenance_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use maintenance_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const maintenance_interfaces::action::MaintenanceSession_FeedbackMessage & msg)
{
  return maintenance_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<maintenance_interfaces::action::MaintenanceSession_FeedbackMessage>()
{
  return "maintenance_interfaces::action::MaintenanceSession_FeedbackMessage";
}

template<>
inline const char * name<maintenance_interfaces::action::MaintenanceSession_FeedbackMessage>()
{
  return "maintenance_interfaces/action/MaintenanceSession_FeedbackMessage";
}

template<>
struct has_fixed_size<maintenance_interfaces::action::MaintenanceSession_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<maintenance_interfaces::action::MaintenanceSession_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<maintenance_interfaces::action::MaintenanceSession_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<maintenance_interfaces::action::MaintenanceSession_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<maintenance_interfaces::action::MaintenanceSession_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<maintenance_interfaces::action::MaintenanceSession>
  : std::true_type
{
};

template<>
struct is_action_goal<maintenance_interfaces::action::MaintenanceSession_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<maintenance_interfaces::action::MaintenanceSession_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<maintenance_interfaces::action::MaintenanceSession_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MAINTENANCE_INTERFACES__ACTION__DETAIL__MAINTENANCE_SESSION__TRAITS_HPP_
