// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from maintenance_interfaces:action/MaintenanceSession.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "maintenance_interfaces/action/maintenance_session.hpp"


#ifndef MAINTENANCE_INTERFACES__ACTION__DETAIL__MAINTENANCE_SESSION__BUILDER_HPP_
#define MAINTENANCE_INTERFACES__ACTION__DETAIL__MAINTENANCE_SESSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "maintenance_interfaces/action/detail/maintenance_session__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace maintenance_interfaces
{

namespace action
{

namespace builder
{

class Init_MaintenanceSession_Goal_service_floors
{
public:
  Init_MaintenanceSession_Goal_service_floors()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::maintenance_interfaces::action::MaintenanceSession_Goal service_floors(::maintenance_interfaces::action::MaintenanceSession_Goal::_service_floors_type arg)
  {
    msg_.service_floors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maintenance_interfaces::action::MaintenanceSession_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maintenance_interfaces::action::MaintenanceSession_Goal>()
{
  return maintenance_interfaces::action::builder::Init_MaintenanceSession_Goal_service_floors();
}

}  // namespace maintenance_interfaces


namespace maintenance_interfaces
{

namespace action
{

namespace builder
{

class Init_MaintenanceSession_Result_report_path
{
public:
  explicit Init_MaintenanceSession_Result_report_path(::maintenance_interfaces::action::MaintenanceSession_Result & msg)
  : msg_(msg)
  {}
  ::maintenance_interfaces::action::MaintenanceSession_Result report_path(::maintenance_interfaces::action::MaintenanceSession_Result::_report_path_type arg)
  {
    msg_.report_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maintenance_interfaces::action::MaintenanceSession_Result msg_;
};

class Init_MaintenanceSession_Result_success
{
public:
  Init_MaintenanceSession_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MaintenanceSession_Result_report_path success(::maintenance_interfaces::action::MaintenanceSession_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MaintenanceSession_Result_report_path(msg_);
  }

private:
  ::maintenance_interfaces::action::MaintenanceSession_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maintenance_interfaces::action::MaintenanceSession_Result>()
{
  return maintenance_interfaces::action::builder::Init_MaintenanceSession_Result_success();
}

}  // namespace maintenance_interfaces


namespace maintenance_interfaces
{

namespace action
{

namespace builder
{

class Init_MaintenanceSession_Feedback_progress
{
public:
  explicit Init_MaintenanceSession_Feedback_progress(::maintenance_interfaces::action::MaintenanceSession_Feedback & msg)
  : msg_(msg)
  {}
  ::maintenance_interfaces::action::MaintenanceSession_Feedback progress(::maintenance_interfaces::action::MaintenanceSession_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maintenance_interfaces::action::MaintenanceSession_Feedback msg_;
};

class Init_MaintenanceSession_Feedback_current_step
{
public:
  explicit Init_MaintenanceSession_Feedback_current_step(::maintenance_interfaces::action::MaintenanceSession_Feedback & msg)
  : msg_(msg)
  {}
  Init_MaintenanceSession_Feedback_progress current_step(::maintenance_interfaces::action::MaintenanceSession_Feedback::_current_step_type arg)
  {
    msg_.current_step = std::move(arg);
    return Init_MaintenanceSession_Feedback_progress(msg_);
  }

private:
  ::maintenance_interfaces::action::MaintenanceSession_Feedback msg_;
};

class Init_MaintenanceSession_Feedback_current_floor
{
public:
  Init_MaintenanceSession_Feedback_current_floor()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MaintenanceSession_Feedback_current_step current_floor(::maintenance_interfaces::action::MaintenanceSession_Feedback::_current_floor_type arg)
  {
    msg_.current_floor = std::move(arg);
    return Init_MaintenanceSession_Feedback_current_step(msg_);
  }

private:
  ::maintenance_interfaces::action::MaintenanceSession_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maintenance_interfaces::action::MaintenanceSession_Feedback>()
{
  return maintenance_interfaces::action::builder::Init_MaintenanceSession_Feedback_current_floor();
}

}  // namespace maintenance_interfaces


namespace maintenance_interfaces
{

namespace action
{

namespace builder
{

class Init_MaintenanceSession_SendGoal_Request_goal
{
public:
  explicit Init_MaintenanceSession_SendGoal_Request_goal(::maintenance_interfaces::action::MaintenanceSession_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::maintenance_interfaces::action::MaintenanceSession_SendGoal_Request goal(::maintenance_interfaces::action::MaintenanceSession_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maintenance_interfaces::action::MaintenanceSession_SendGoal_Request msg_;
};

class Init_MaintenanceSession_SendGoal_Request_goal_id
{
public:
  Init_MaintenanceSession_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MaintenanceSession_SendGoal_Request_goal goal_id(::maintenance_interfaces::action::MaintenanceSession_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MaintenanceSession_SendGoal_Request_goal(msg_);
  }

private:
  ::maintenance_interfaces::action::MaintenanceSession_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maintenance_interfaces::action::MaintenanceSession_SendGoal_Request>()
{
  return maintenance_interfaces::action::builder::Init_MaintenanceSession_SendGoal_Request_goal_id();
}

}  // namespace maintenance_interfaces


namespace maintenance_interfaces
{

namespace action
{

namespace builder
{

class Init_MaintenanceSession_SendGoal_Response_stamp
{
public:
  explicit Init_MaintenanceSession_SendGoal_Response_stamp(::maintenance_interfaces::action::MaintenanceSession_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::maintenance_interfaces::action::MaintenanceSession_SendGoal_Response stamp(::maintenance_interfaces::action::MaintenanceSession_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maintenance_interfaces::action::MaintenanceSession_SendGoal_Response msg_;
};

class Init_MaintenanceSession_SendGoal_Response_accepted
{
public:
  Init_MaintenanceSession_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MaintenanceSession_SendGoal_Response_stamp accepted(::maintenance_interfaces::action::MaintenanceSession_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MaintenanceSession_SendGoal_Response_stamp(msg_);
  }

private:
  ::maintenance_interfaces::action::MaintenanceSession_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maintenance_interfaces::action::MaintenanceSession_SendGoal_Response>()
{
  return maintenance_interfaces::action::builder::Init_MaintenanceSession_SendGoal_Response_accepted();
}

}  // namespace maintenance_interfaces


namespace maintenance_interfaces
{

namespace action
{

namespace builder
{

class Init_MaintenanceSession_SendGoal_Event_response
{
public:
  explicit Init_MaintenanceSession_SendGoal_Event_response(::maintenance_interfaces::action::MaintenanceSession_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::maintenance_interfaces::action::MaintenanceSession_SendGoal_Event response(::maintenance_interfaces::action::MaintenanceSession_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maintenance_interfaces::action::MaintenanceSession_SendGoal_Event msg_;
};

class Init_MaintenanceSession_SendGoal_Event_request
{
public:
  explicit Init_MaintenanceSession_SendGoal_Event_request(::maintenance_interfaces::action::MaintenanceSession_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_MaintenanceSession_SendGoal_Event_response request(::maintenance_interfaces::action::MaintenanceSession_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MaintenanceSession_SendGoal_Event_response(msg_);
  }

private:
  ::maintenance_interfaces::action::MaintenanceSession_SendGoal_Event msg_;
};

class Init_MaintenanceSession_SendGoal_Event_info
{
public:
  Init_MaintenanceSession_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MaintenanceSession_SendGoal_Event_request info(::maintenance_interfaces::action::MaintenanceSession_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MaintenanceSession_SendGoal_Event_request(msg_);
  }

private:
  ::maintenance_interfaces::action::MaintenanceSession_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maintenance_interfaces::action::MaintenanceSession_SendGoal_Event>()
{
  return maintenance_interfaces::action::builder::Init_MaintenanceSession_SendGoal_Event_info();
}

}  // namespace maintenance_interfaces


namespace maintenance_interfaces
{

namespace action
{

namespace builder
{

class Init_MaintenanceSession_GetResult_Request_goal_id
{
public:
  Init_MaintenanceSession_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::maintenance_interfaces::action::MaintenanceSession_GetResult_Request goal_id(::maintenance_interfaces::action::MaintenanceSession_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maintenance_interfaces::action::MaintenanceSession_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maintenance_interfaces::action::MaintenanceSession_GetResult_Request>()
{
  return maintenance_interfaces::action::builder::Init_MaintenanceSession_GetResult_Request_goal_id();
}

}  // namespace maintenance_interfaces


namespace maintenance_interfaces
{

namespace action
{

namespace builder
{

class Init_MaintenanceSession_GetResult_Response_result
{
public:
  explicit Init_MaintenanceSession_GetResult_Response_result(::maintenance_interfaces::action::MaintenanceSession_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::maintenance_interfaces::action::MaintenanceSession_GetResult_Response result(::maintenance_interfaces::action::MaintenanceSession_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maintenance_interfaces::action::MaintenanceSession_GetResult_Response msg_;
};

class Init_MaintenanceSession_GetResult_Response_status
{
public:
  Init_MaintenanceSession_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MaintenanceSession_GetResult_Response_result status(::maintenance_interfaces::action::MaintenanceSession_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MaintenanceSession_GetResult_Response_result(msg_);
  }

private:
  ::maintenance_interfaces::action::MaintenanceSession_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maintenance_interfaces::action::MaintenanceSession_GetResult_Response>()
{
  return maintenance_interfaces::action::builder::Init_MaintenanceSession_GetResult_Response_status();
}

}  // namespace maintenance_interfaces


namespace maintenance_interfaces
{

namespace action
{

namespace builder
{

class Init_MaintenanceSession_GetResult_Event_response
{
public:
  explicit Init_MaintenanceSession_GetResult_Event_response(::maintenance_interfaces::action::MaintenanceSession_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::maintenance_interfaces::action::MaintenanceSession_GetResult_Event response(::maintenance_interfaces::action::MaintenanceSession_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maintenance_interfaces::action::MaintenanceSession_GetResult_Event msg_;
};

class Init_MaintenanceSession_GetResult_Event_request
{
public:
  explicit Init_MaintenanceSession_GetResult_Event_request(::maintenance_interfaces::action::MaintenanceSession_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_MaintenanceSession_GetResult_Event_response request(::maintenance_interfaces::action::MaintenanceSession_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MaintenanceSession_GetResult_Event_response(msg_);
  }

private:
  ::maintenance_interfaces::action::MaintenanceSession_GetResult_Event msg_;
};

class Init_MaintenanceSession_GetResult_Event_info
{
public:
  Init_MaintenanceSession_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MaintenanceSession_GetResult_Event_request info(::maintenance_interfaces::action::MaintenanceSession_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MaintenanceSession_GetResult_Event_request(msg_);
  }

private:
  ::maintenance_interfaces::action::MaintenanceSession_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maintenance_interfaces::action::MaintenanceSession_GetResult_Event>()
{
  return maintenance_interfaces::action::builder::Init_MaintenanceSession_GetResult_Event_info();
}

}  // namespace maintenance_interfaces


namespace maintenance_interfaces
{

namespace action
{

namespace builder
{

class Init_MaintenanceSession_FeedbackMessage_feedback
{
public:
  explicit Init_MaintenanceSession_FeedbackMessage_feedback(::maintenance_interfaces::action::MaintenanceSession_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::maintenance_interfaces::action::MaintenanceSession_FeedbackMessage feedback(::maintenance_interfaces::action::MaintenanceSession_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maintenance_interfaces::action::MaintenanceSession_FeedbackMessage msg_;
};

class Init_MaintenanceSession_FeedbackMessage_goal_id
{
public:
  Init_MaintenanceSession_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MaintenanceSession_FeedbackMessage_feedback goal_id(::maintenance_interfaces::action::MaintenanceSession_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MaintenanceSession_FeedbackMessage_feedback(msg_);
  }

private:
  ::maintenance_interfaces::action::MaintenanceSession_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maintenance_interfaces::action::MaintenanceSession_FeedbackMessage>()
{
  return maintenance_interfaces::action::builder::Init_MaintenanceSession_FeedbackMessage_goal_id();
}

}  // namespace maintenance_interfaces

#endif  // MAINTENANCE_INTERFACES__ACTION__DETAIL__MAINTENANCE_SESSION__BUILDER_HPP_
