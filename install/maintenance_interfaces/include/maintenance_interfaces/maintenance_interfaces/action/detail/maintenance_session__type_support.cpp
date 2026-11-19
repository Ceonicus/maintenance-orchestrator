// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from maintenance_interfaces:action/MaintenanceSession.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "maintenance_interfaces/action/detail/maintenance_session__functions.h"
#include "maintenance_interfaces/action/detail/maintenance_session__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace maintenance_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void MaintenanceSession_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) maintenance_interfaces::action::MaintenanceSession_Goal(_init);
}

void MaintenanceSession_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<maintenance_interfaces::action::MaintenanceSession_Goal *>(message_memory);
  typed_message->~MaintenanceSession_Goal();
}

size_t size_function__MaintenanceSession_Goal__service_floors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MaintenanceSession_Goal__service_floors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MaintenanceSession_Goal__service_floors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__MaintenanceSession_Goal__service_floors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__MaintenanceSession_Goal__service_floors(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__MaintenanceSession_Goal__service_floors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__MaintenanceSession_Goal__service_floors(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__MaintenanceSession_Goal__service_floors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MaintenanceSession_Goal_message_member_array[1] = {
  {
    "service_floors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(maintenance_interfaces::action::MaintenanceSession_Goal, service_floors),  // bytes offset in struct
    nullptr,  // default value
    size_function__MaintenanceSession_Goal__service_floors,  // size() function pointer
    get_const_function__MaintenanceSession_Goal__service_floors,  // get_const(index) function pointer
    get_function__MaintenanceSession_Goal__service_floors,  // get(index) function pointer
    fetch_function__MaintenanceSession_Goal__service_floors,  // fetch(index, &value) function pointer
    assign_function__MaintenanceSession_Goal__service_floors,  // assign(index, value) function pointer
    resize_function__MaintenanceSession_Goal__service_floors  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MaintenanceSession_Goal_message_members = {
  "maintenance_interfaces::action",  // message namespace
  "MaintenanceSession_Goal",  // message name
  1,  // number of fields
  sizeof(maintenance_interfaces::action::MaintenanceSession_Goal),
  false,  // has_any_key_member_
  MaintenanceSession_Goal_message_member_array,  // message members
  MaintenanceSession_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  MaintenanceSession_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MaintenanceSession_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MaintenanceSession_Goal_message_members,
  get_message_typesupport_handle_function,
  &maintenance_interfaces__action__MaintenanceSession_Goal__get_type_hash,
  &maintenance_interfaces__action__MaintenanceSession_Goal__get_type_description,
  &maintenance_interfaces__action__MaintenanceSession_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace maintenance_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<maintenance_interfaces::action::MaintenanceSession_Goal>()
{
  return &::maintenance_interfaces::action::rosidl_typesupport_introspection_cpp::MaintenanceSession_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, maintenance_interfaces, action, MaintenanceSession_Goal)() {
  return &::maintenance_interfaces::action::rosidl_typesupport_introspection_cpp::MaintenanceSession_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__functions.h"
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace maintenance_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void MaintenanceSession_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) maintenance_interfaces::action::MaintenanceSession_Result(_init);
}

void MaintenanceSession_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<maintenance_interfaces::action::MaintenanceSession_Result *>(message_memory);
  typed_message->~MaintenanceSession_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MaintenanceSession_Result_message_member_array[2] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(maintenance_interfaces::action::MaintenanceSession_Result, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "report_path",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(maintenance_interfaces::action::MaintenanceSession_Result, report_path),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MaintenanceSession_Result_message_members = {
  "maintenance_interfaces::action",  // message namespace
  "MaintenanceSession_Result",  // message name
  2,  // number of fields
  sizeof(maintenance_interfaces::action::MaintenanceSession_Result),
  false,  // has_any_key_member_
  MaintenanceSession_Result_message_member_array,  // message members
  MaintenanceSession_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  MaintenanceSession_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MaintenanceSession_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MaintenanceSession_Result_message_members,
  get_message_typesupport_handle_function,
  &maintenance_interfaces__action__MaintenanceSession_Result__get_type_hash,
  &maintenance_interfaces__action__MaintenanceSession_Result__get_type_description,
  &maintenance_interfaces__action__MaintenanceSession_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace maintenance_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<maintenance_interfaces::action::MaintenanceSession_Result>()
{
  return &::maintenance_interfaces::action::rosidl_typesupport_introspection_cpp::MaintenanceSession_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, maintenance_interfaces, action, MaintenanceSession_Result)() {
  return &::maintenance_interfaces::action::rosidl_typesupport_introspection_cpp::MaintenanceSession_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__functions.h"
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace maintenance_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void MaintenanceSession_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) maintenance_interfaces::action::MaintenanceSession_Feedback(_init);
}

void MaintenanceSession_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<maintenance_interfaces::action::MaintenanceSession_Feedback *>(message_memory);
  typed_message->~MaintenanceSession_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MaintenanceSession_Feedback_message_member_array[3] = {
  {
    "current_floor",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(maintenance_interfaces::action::MaintenanceSession_Feedback, current_floor),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "current_step",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(maintenance_interfaces::action::MaintenanceSession_Feedback, current_step),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "progress",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(maintenance_interfaces::action::MaintenanceSession_Feedback, progress),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MaintenanceSession_Feedback_message_members = {
  "maintenance_interfaces::action",  // message namespace
  "MaintenanceSession_Feedback",  // message name
  3,  // number of fields
  sizeof(maintenance_interfaces::action::MaintenanceSession_Feedback),
  false,  // has_any_key_member_
  MaintenanceSession_Feedback_message_member_array,  // message members
  MaintenanceSession_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  MaintenanceSession_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MaintenanceSession_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MaintenanceSession_Feedback_message_members,
  get_message_typesupport_handle_function,
  &maintenance_interfaces__action__MaintenanceSession_Feedback__get_type_hash,
  &maintenance_interfaces__action__MaintenanceSession_Feedback__get_type_description,
  &maintenance_interfaces__action__MaintenanceSession_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace maintenance_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<maintenance_interfaces::action::MaintenanceSession_Feedback>()
{
  return &::maintenance_interfaces::action::rosidl_typesupport_introspection_cpp::MaintenanceSession_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, maintenance_interfaces, action, MaintenanceSession_Feedback)() {
  return &::maintenance_interfaces::action::rosidl_typesupport_introspection_cpp::MaintenanceSession_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__functions.h"
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace maintenance_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void MaintenanceSession_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) maintenance_interfaces::action::MaintenanceSession_SendGoal_Request(_init);
}

void MaintenanceSession_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<maintenance_interfaces::action::MaintenanceSession_SendGoal_Request *>(message_memory);
  typed_message->~MaintenanceSession_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MaintenanceSession_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(maintenance_interfaces::action::MaintenanceSession_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<maintenance_interfaces::action::MaintenanceSession_Goal>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(maintenance_interfaces::action::MaintenanceSession_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MaintenanceSession_SendGoal_Request_message_members = {
  "maintenance_interfaces::action",  // message namespace
  "MaintenanceSession_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(maintenance_interfaces::action::MaintenanceSession_SendGoal_Request),
  false,  // has_any_key_member_
  MaintenanceSession_SendGoal_Request_message_member_array,  // message members
  MaintenanceSession_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MaintenanceSession_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MaintenanceSession_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MaintenanceSession_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
  &maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__get_type_hash,
  &maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__get_type_description,
  &maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace maintenance_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<maintenance_interfaces::action::MaintenanceSession_SendGoal_Request>()
{
  return &::maintenance_interfaces::action::rosidl_typesupport_introspection_cpp::MaintenanceSession_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, maintenance_interfaces, action, MaintenanceSession_SendGoal_Request)() {
  return &::maintenance_interfaces::action::rosidl_typesupport_introspection_cpp::MaintenanceSession_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__functions.h"
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace maintenance_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void MaintenanceSession_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) maintenance_interfaces::action::MaintenanceSession_SendGoal_Response(_init);
}

void MaintenanceSession_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<maintenance_interfaces::action::MaintenanceSession_SendGoal_Response *>(message_memory);
  typed_message->~MaintenanceSession_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MaintenanceSession_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(maintenance_interfaces::action::MaintenanceSession_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(maintenance_interfaces::action::MaintenanceSession_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MaintenanceSession_SendGoal_Response_message_members = {
  "maintenance_interfaces::action",  // message namespace
  "MaintenanceSession_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(maintenance_interfaces::action::MaintenanceSession_SendGoal_Response),
  false,  // has_any_key_member_
  MaintenanceSession_SendGoal_Response_message_member_array,  // message members
  MaintenanceSession_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MaintenanceSession_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MaintenanceSession_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MaintenanceSession_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
  &maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__get_type_hash,
  &maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__get_type_description,
  &maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace maintenance_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<maintenance_interfaces::action::MaintenanceSession_SendGoal_Response>()
{
  return &::maintenance_interfaces::action::rosidl_typesupport_introspection_cpp::MaintenanceSession_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, maintenance_interfaces, action, MaintenanceSession_SendGoal_Response)() {
  return &::maintenance_interfaces::action::rosidl_typesupport_introspection_cpp::MaintenanceSession_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__functions.h"
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace maintenance_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void MaintenanceSession_SendGoal_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) maintenance_interfaces::action::MaintenanceSession_SendGoal_Event(_init);
}

void MaintenanceSession_SendGoal_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<maintenance_interfaces::action::MaintenanceSession_SendGoal_Event *>(message_memory);
  typed_message->~MaintenanceSession_SendGoal_Event();
}

size_t size_function__MaintenanceSession_SendGoal_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<maintenance_interfaces::action::MaintenanceSession_SendGoal_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MaintenanceSession_SendGoal_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<maintenance_interfaces::action::MaintenanceSession_SendGoal_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__MaintenanceSession_SendGoal_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<maintenance_interfaces::action::MaintenanceSession_SendGoal_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__MaintenanceSession_SendGoal_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const maintenance_interfaces::action::MaintenanceSession_SendGoal_Request *>(
    get_const_function__MaintenanceSession_SendGoal_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<maintenance_interfaces::action::MaintenanceSession_SendGoal_Request *>(untyped_value);
  value = item;
}

void assign_function__MaintenanceSession_SendGoal_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<maintenance_interfaces::action::MaintenanceSession_SendGoal_Request *>(
    get_function__MaintenanceSession_SendGoal_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const maintenance_interfaces::action::MaintenanceSession_SendGoal_Request *>(untyped_value);
  item = value;
}

void resize_function__MaintenanceSession_SendGoal_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<maintenance_interfaces::action::MaintenanceSession_SendGoal_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MaintenanceSession_SendGoal_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<maintenance_interfaces::action::MaintenanceSession_SendGoal_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MaintenanceSession_SendGoal_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<maintenance_interfaces::action::MaintenanceSession_SendGoal_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__MaintenanceSession_SendGoal_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<maintenance_interfaces::action::MaintenanceSession_SendGoal_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__MaintenanceSession_SendGoal_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const maintenance_interfaces::action::MaintenanceSession_SendGoal_Response *>(
    get_const_function__MaintenanceSession_SendGoal_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<maintenance_interfaces::action::MaintenanceSession_SendGoal_Response *>(untyped_value);
  value = item;
}

void assign_function__MaintenanceSession_SendGoal_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<maintenance_interfaces::action::MaintenanceSession_SendGoal_Response *>(
    get_function__MaintenanceSession_SendGoal_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const maintenance_interfaces::action::MaintenanceSession_SendGoal_Response *>(untyped_value);
  item = value;
}

void resize_function__MaintenanceSession_SendGoal_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<maintenance_interfaces::action::MaintenanceSession_SendGoal_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MaintenanceSession_SendGoal_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(maintenance_interfaces::action::MaintenanceSession_SendGoal_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<maintenance_interfaces::action::MaintenanceSession_SendGoal_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(maintenance_interfaces::action::MaintenanceSession_SendGoal_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__MaintenanceSession_SendGoal_Event__request,  // size() function pointer
    get_const_function__MaintenanceSession_SendGoal_Event__request,  // get_const(index) function pointer
    get_function__MaintenanceSession_SendGoal_Event__request,  // get(index) function pointer
    fetch_function__MaintenanceSession_SendGoal_Event__request,  // fetch(index, &value) function pointer
    assign_function__MaintenanceSession_SendGoal_Event__request,  // assign(index, value) function pointer
    resize_function__MaintenanceSession_SendGoal_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<maintenance_interfaces::action::MaintenanceSession_SendGoal_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(maintenance_interfaces::action::MaintenanceSession_SendGoal_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__MaintenanceSession_SendGoal_Event__response,  // size() function pointer
    get_const_function__MaintenanceSession_SendGoal_Event__response,  // get_const(index) function pointer
    get_function__MaintenanceSession_SendGoal_Event__response,  // get(index) function pointer
    fetch_function__MaintenanceSession_SendGoal_Event__response,  // fetch(index, &value) function pointer
    assign_function__MaintenanceSession_SendGoal_Event__response,  // assign(index, value) function pointer
    resize_function__MaintenanceSession_SendGoal_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MaintenanceSession_SendGoal_Event_message_members = {
  "maintenance_interfaces::action",  // message namespace
  "MaintenanceSession_SendGoal_Event",  // message name
  3,  // number of fields
  sizeof(maintenance_interfaces::action::MaintenanceSession_SendGoal_Event),
  false,  // has_any_key_member_
  MaintenanceSession_SendGoal_Event_message_member_array,  // message members
  MaintenanceSession_SendGoal_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  MaintenanceSession_SendGoal_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MaintenanceSession_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MaintenanceSession_SendGoal_Event_message_members,
  get_message_typesupport_handle_function,
  &maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__get_type_hash,
  &maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__get_type_description,
  &maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace maintenance_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<maintenance_interfaces::action::MaintenanceSession_SendGoal_Event>()
{
  return &::maintenance_interfaces::action::rosidl_typesupport_introspection_cpp::MaintenanceSession_SendGoal_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, maintenance_interfaces, action, MaintenanceSession_SendGoal_Event)() {
  return &::maintenance_interfaces::action::rosidl_typesupport_introspection_cpp::MaintenanceSession_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__functions.h"
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace maintenance_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers MaintenanceSession_SendGoal_service_members = {
  "maintenance_interfaces::action",  // service namespace
  "MaintenanceSession_SendGoal",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<maintenance_interfaces::action::MaintenanceSession_SendGoal>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t MaintenanceSession_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MaintenanceSession_SendGoal_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<maintenance_interfaces::action::MaintenanceSession_SendGoal_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<maintenance_interfaces::action::MaintenanceSession_SendGoal_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<maintenance_interfaces::action::MaintenanceSession_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<maintenance_interfaces::action::MaintenanceSession_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<maintenance_interfaces::action::MaintenanceSession_SendGoal>,
  &maintenance_interfaces__action__MaintenanceSession_SendGoal__get_type_hash,
  &maintenance_interfaces__action__MaintenanceSession_SendGoal__get_type_description,
  &maintenance_interfaces__action__MaintenanceSession_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace maintenance_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<maintenance_interfaces::action::MaintenanceSession_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::maintenance_interfaces::action::rosidl_typesupport_introspection_cpp::MaintenanceSession_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::maintenance_interfaces::action::MaintenanceSession_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::maintenance_interfaces::action::MaintenanceSession_SendGoal_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::maintenance_interfaces::action::MaintenanceSession_SendGoal_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, maintenance_interfaces, action, MaintenanceSession_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<maintenance_interfaces::action::MaintenanceSession_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__functions.h"
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace maintenance_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void MaintenanceSession_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) maintenance_interfaces::action::MaintenanceSession_GetResult_Request(_init);
}

void MaintenanceSession_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<maintenance_interfaces::action::MaintenanceSession_GetResult_Request *>(message_memory);
  typed_message->~MaintenanceSession_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MaintenanceSession_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(maintenance_interfaces::action::MaintenanceSession_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MaintenanceSession_GetResult_Request_message_members = {
  "maintenance_interfaces::action",  // message namespace
  "MaintenanceSession_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(maintenance_interfaces::action::MaintenanceSession_GetResult_Request),
  false,  // has_any_key_member_
  MaintenanceSession_GetResult_Request_message_member_array,  // message members
  MaintenanceSession_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MaintenanceSession_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MaintenanceSession_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MaintenanceSession_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
  &maintenance_interfaces__action__MaintenanceSession_GetResult_Request__get_type_hash,
  &maintenance_interfaces__action__MaintenanceSession_GetResult_Request__get_type_description,
  &maintenance_interfaces__action__MaintenanceSession_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace maintenance_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<maintenance_interfaces::action::MaintenanceSession_GetResult_Request>()
{
  return &::maintenance_interfaces::action::rosidl_typesupport_introspection_cpp::MaintenanceSession_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, maintenance_interfaces, action, MaintenanceSession_GetResult_Request)() {
  return &::maintenance_interfaces::action::rosidl_typesupport_introspection_cpp::MaintenanceSession_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__functions.h"
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace maintenance_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void MaintenanceSession_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) maintenance_interfaces::action::MaintenanceSession_GetResult_Response(_init);
}

void MaintenanceSession_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<maintenance_interfaces::action::MaintenanceSession_GetResult_Response *>(message_memory);
  typed_message->~MaintenanceSession_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MaintenanceSession_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(maintenance_interfaces::action::MaintenanceSession_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<maintenance_interfaces::action::MaintenanceSession_Result>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(maintenance_interfaces::action::MaintenanceSession_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MaintenanceSession_GetResult_Response_message_members = {
  "maintenance_interfaces::action",  // message namespace
  "MaintenanceSession_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(maintenance_interfaces::action::MaintenanceSession_GetResult_Response),
  false,  // has_any_key_member_
  MaintenanceSession_GetResult_Response_message_member_array,  // message members
  MaintenanceSession_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MaintenanceSession_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MaintenanceSession_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MaintenanceSession_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
  &maintenance_interfaces__action__MaintenanceSession_GetResult_Response__get_type_hash,
  &maintenance_interfaces__action__MaintenanceSession_GetResult_Response__get_type_description,
  &maintenance_interfaces__action__MaintenanceSession_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace maintenance_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<maintenance_interfaces::action::MaintenanceSession_GetResult_Response>()
{
  return &::maintenance_interfaces::action::rosidl_typesupport_introspection_cpp::MaintenanceSession_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, maintenance_interfaces, action, MaintenanceSession_GetResult_Response)() {
  return &::maintenance_interfaces::action::rosidl_typesupport_introspection_cpp::MaintenanceSession_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__functions.h"
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace maintenance_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void MaintenanceSession_GetResult_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) maintenance_interfaces::action::MaintenanceSession_GetResult_Event(_init);
}

void MaintenanceSession_GetResult_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<maintenance_interfaces::action::MaintenanceSession_GetResult_Event *>(message_memory);
  typed_message->~MaintenanceSession_GetResult_Event();
}

size_t size_function__MaintenanceSession_GetResult_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<maintenance_interfaces::action::MaintenanceSession_GetResult_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MaintenanceSession_GetResult_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<maintenance_interfaces::action::MaintenanceSession_GetResult_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__MaintenanceSession_GetResult_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<maintenance_interfaces::action::MaintenanceSession_GetResult_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__MaintenanceSession_GetResult_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const maintenance_interfaces::action::MaintenanceSession_GetResult_Request *>(
    get_const_function__MaintenanceSession_GetResult_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<maintenance_interfaces::action::MaintenanceSession_GetResult_Request *>(untyped_value);
  value = item;
}

void assign_function__MaintenanceSession_GetResult_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<maintenance_interfaces::action::MaintenanceSession_GetResult_Request *>(
    get_function__MaintenanceSession_GetResult_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const maintenance_interfaces::action::MaintenanceSession_GetResult_Request *>(untyped_value);
  item = value;
}

void resize_function__MaintenanceSession_GetResult_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<maintenance_interfaces::action::MaintenanceSession_GetResult_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MaintenanceSession_GetResult_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<maintenance_interfaces::action::MaintenanceSession_GetResult_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MaintenanceSession_GetResult_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<maintenance_interfaces::action::MaintenanceSession_GetResult_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__MaintenanceSession_GetResult_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<maintenance_interfaces::action::MaintenanceSession_GetResult_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__MaintenanceSession_GetResult_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const maintenance_interfaces::action::MaintenanceSession_GetResult_Response *>(
    get_const_function__MaintenanceSession_GetResult_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<maintenance_interfaces::action::MaintenanceSession_GetResult_Response *>(untyped_value);
  value = item;
}

void assign_function__MaintenanceSession_GetResult_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<maintenance_interfaces::action::MaintenanceSession_GetResult_Response *>(
    get_function__MaintenanceSession_GetResult_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const maintenance_interfaces::action::MaintenanceSession_GetResult_Response *>(untyped_value);
  item = value;
}

void resize_function__MaintenanceSession_GetResult_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<maintenance_interfaces::action::MaintenanceSession_GetResult_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MaintenanceSession_GetResult_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(maintenance_interfaces::action::MaintenanceSession_GetResult_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<maintenance_interfaces::action::MaintenanceSession_GetResult_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(maintenance_interfaces::action::MaintenanceSession_GetResult_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__MaintenanceSession_GetResult_Event__request,  // size() function pointer
    get_const_function__MaintenanceSession_GetResult_Event__request,  // get_const(index) function pointer
    get_function__MaintenanceSession_GetResult_Event__request,  // get(index) function pointer
    fetch_function__MaintenanceSession_GetResult_Event__request,  // fetch(index, &value) function pointer
    assign_function__MaintenanceSession_GetResult_Event__request,  // assign(index, value) function pointer
    resize_function__MaintenanceSession_GetResult_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<maintenance_interfaces::action::MaintenanceSession_GetResult_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(maintenance_interfaces::action::MaintenanceSession_GetResult_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__MaintenanceSession_GetResult_Event__response,  // size() function pointer
    get_const_function__MaintenanceSession_GetResult_Event__response,  // get_const(index) function pointer
    get_function__MaintenanceSession_GetResult_Event__response,  // get(index) function pointer
    fetch_function__MaintenanceSession_GetResult_Event__response,  // fetch(index, &value) function pointer
    assign_function__MaintenanceSession_GetResult_Event__response,  // assign(index, value) function pointer
    resize_function__MaintenanceSession_GetResult_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MaintenanceSession_GetResult_Event_message_members = {
  "maintenance_interfaces::action",  // message namespace
  "MaintenanceSession_GetResult_Event",  // message name
  3,  // number of fields
  sizeof(maintenance_interfaces::action::MaintenanceSession_GetResult_Event),
  false,  // has_any_key_member_
  MaintenanceSession_GetResult_Event_message_member_array,  // message members
  MaintenanceSession_GetResult_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  MaintenanceSession_GetResult_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MaintenanceSession_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MaintenanceSession_GetResult_Event_message_members,
  get_message_typesupport_handle_function,
  &maintenance_interfaces__action__MaintenanceSession_GetResult_Event__get_type_hash,
  &maintenance_interfaces__action__MaintenanceSession_GetResult_Event__get_type_description,
  &maintenance_interfaces__action__MaintenanceSession_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace maintenance_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<maintenance_interfaces::action::MaintenanceSession_GetResult_Event>()
{
  return &::maintenance_interfaces::action::rosidl_typesupport_introspection_cpp::MaintenanceSession_GetResult_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, maintenance_interfaces, action, MaintenanceSession_GetResult_Event)() {
  return &::maintenance_interfaces::action::rosidl_typesupport_introspection_cpp::MaintenanceSession_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__functions.h"
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace maintenance_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers MaintenanceSession_GetResult_service_members = {
  "maintenance_interfaces::action",  // service namespace
  "MaintenanceSession_GetResult",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<maintenance_interfaces::action::MaintenanceSession_GetResult>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t MaintenanceSession_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MaintenanceSession_GetResult_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<maintenance_interfaces::action::MaintenanceSession_GetResult_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<maintenance_interfaces::action::MaintenanceSession_GetResult_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<maintenance_interfaces::action::MaintenanceSession_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<maintenance_interfaces::action::MaintenanceSession_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<maintenance_interfaces::action::MaintenanceSession_GetResult>,
  &maintenance_interfaces__action__MaintenanceSession_GetResult__get_type_hash,
  &maintenance_interfaces__action__MaintenanceSession_GetResult__get_type_description,
  &maintenance_interfaces__action__MaintenanceSession_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace maintenance_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<maintenance_interfaces::action::MaintenanceSession_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::maintenance_interfaces::action::rosidl_typesupport_introspection_cpp::MaintenanceSession_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::maintenance_interfaces::action::MaintenanceSession_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::maintenance_interfaces::action::MaintenanceSession_GetResult_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::maintenance_interfaces::action::MaintenanceSession_GetResult_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, maintenance_interfaces, action, MaintenanceSession_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<maintenance_interfaces::action::MaintenanceSession_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__functions.h"
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace maintenance_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void MaintenanceSession_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) maintenance_interfaces::action::MaintenanceSession_FeedbackMessage(_init);
}

void MaintenanceSession_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<maintenance_interfaces::action::MaintenanceSession_FeedbackMessage *>(message_memory);
  typed_message->~MaintenanceSession_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MaintenanceSession_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(maintenance_interfaces::action::MaintenanceSession_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<maintenance_interfaces::action::MaintenanceSession_Feedback>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(maintenance_interfaces::action::MaintenanceSession_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MaintenanceSession_FeedbackMessage_message_members = {
  "maintenance_interfaces::action",  // message namespace
  "MaintenanceSession_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(maintenance_interfaces::action::MaintenanceSession_FeedbackMessage),
  false,  // has_any_key_member_
  MaintenanceSession_FeedbackMessage_message_member_array,  // message members
  MaintenanceSession_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  MaintenanceSession_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MaintenanceSession_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MaintenanceSession_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
  &maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__get_type_hash,
  &maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__get_type_description,
  &maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace maintenance_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<maintenance_interfaces::action::MaintenanceSession_FeedbackMessage>()
{
  return &::maintenance_interfaces::action::rosidl_typesupport_introspection_cpp::MaintenanceSession_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, maintenance_interfaces, action, MaintenanceSession_FeedbackMessage)() {
  return &::maintenance_interfaces::action::rosidl_typesupport_introspection_cpp::MaintenanceSession_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
