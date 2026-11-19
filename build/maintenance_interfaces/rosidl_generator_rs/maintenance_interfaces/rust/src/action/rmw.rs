
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "maintenance_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__SimpleTask_Goal() -> *const std::ffi::c_void;
}

#[link(name = "maintenance_interfaces__rosidl_generator_c")]
extern "C" {
    fn maintenance_interfaces__action__SimpleTask_Goal__init(msg: *mut SimpleTask_Goal) -> bool;
    fn maintenance_interfaces__action__SimpleTask_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SimpleTask_Goal>, size: usize) -> bool;
    fn maintenance_interfaces__action__SimpleTask_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SimpleTask_Goal>);
    fn maintenance_interfaces__action__SimpleTask_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SimpleTask_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<SimpleTask_Goal>) -> bool;
}

// Corresponds to maintenance_interfaces__action__SimpleTask_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SimpleTask_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub task_name: rosidl_runtime_rs::String,

}



impl Default for SimpleTask_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maintenance_interfaces__action__SimpleTask_Goal__init(&mut msg as *mut _) {
        panic!("Call to maintenance_interfaces__action__SimpleTask_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SimpleTask_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__SimpleTask_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__SimpleTask_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__SimpleTask_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SimpleTask_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SimpleTask_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "maintenance_interfaces/action/SimpleTask_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__SimpleTask_Goal() }
  }
}


#[link(name = "maintenance_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__SimpleTask_Result() -> *const std::ffi::c_void;
}

#[link(name = "maintenance_interfaces__rosidl_generator_c")]
extern "C" {
    fn maintenance_interfaces__action__SimpleTask_Result__init(msg: *mut SimpleTask_Result) -> bool;
    fn maintenance_interfaces__action__SimpleTask_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SimpleTask_Result>, size: usize) -> bool;
    fn maintenance_interfaces__action__SimpleTask_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SimpleTask_Result>);
    fn maintenance_interfaces__action__SimpleTask_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SimpleTask_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<SimpleTask_Result>) -> bool;
}

// Corresponds to maintenance_interfaces__action__SimpleTask_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SimpleTask_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SimpleTask_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maintenance_interfaces__action__SimpleTask_Result__init(&mut msg as *mut _) {
        panic!("Call to maintenance_interfaces__action__SimpleTask_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SimpleTask_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__SimpleTask_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__SimpleTask_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__SimpleTask_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SimpleTask_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SimpleTask_Result where Self: Sized {
  const TYPE_NAME: &'static str = "maintenance_interfaces/action/SimpleTask_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__SimpleTask_Result() }
  }
}


#[link(name = "maintenance_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__SimpleTask_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "maintenance_interfaces__rosidl_generator_c")]
extern "C" {
    fn maintenance_interfaces__action__SimpleTask_Feedback__init(msg: *mut SimpleTask_Feedback) -> bool;
    fn maintenance_interfaces__action__SimpleTask_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SimpleTask_Feedback>, size: usize) -> bool;
    fn maintenance_interfaces__action__SimpleTask_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SimpleTask_Feedback>);
    fn maintenance_interfaces__action__SimpleTask_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SimpleTask_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<SimpleTask_Feedback>) -> bool;
}

// Corresponds to maintenance_interfaces__action__SimpleTask_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SimpleTask_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: rosidl_runtime_rs::String,

}



impl Default for SimpleTask_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maintenance_interfaces__action__SimpleTask_Feedback__init(&mut msg as *mut _) {
        panic!("Call to maintenance_interfaces__action__SimpleTask_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SimpleTask_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__SimpleTask_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__SimpleTask_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__SimpleTask_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SimpleTask_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SimpleTask_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "maintenance_interfaces/action/SimpleTask_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__SimpleTask_Feedback() }
  }
}


#[link(name = "maintenance_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__SimpleTask_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "maintenance_interfaces__rosidl_generator_c")]
extern "C" {
    fn maintenance_interfaces__action__SimpleTask_FeedbackMessage__init(msg: *mut SimpleTask_FeedbackMessage) -> bool;
    fn maintenance_interfaces__action__SimpleTask_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SimpleTask_FeedbackMessage>, size: usize) -> bool;
    fn maintenance_interfaces__action__SimpleTask_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SimpleTask_FeedbackMessage>);
    fn maintenance_interfaces__action__SimpleTask_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SimpleTask_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<SimpleTask_FeedbackMessage>) -> bool;
}

// Corresponds to maintenance_interfaces__action__SimpleTask_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SimpleTask_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::SimpleTask_Feedback,

}



impl Default for SimpleTask_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maintenance_interfaces__action__SimpleTask_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to maintenance_interfaces__action__SimpleTask_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SimpleTask_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__SimpleTask_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__SimpleTask_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__SimpleTask_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SimpleTask_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SimpleTask_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "maintenance_interfaces/action/SimpleTask_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__SimpleTask_FeedbackMessage() }
  }
}


#[link(name = "maintenance_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__MaintenanceSession_Goal() -> *const std::ffi::c_void;
}

#[link(name = "maintenance_interfaces__rosidl_generator_c")]
extern "C" {
    fn maintenance_interfaces__action__MaintenanceSession_Goal__init(msg: *mut MaintenanceSession_Goal) -> bool;
    fn maintenance_interfaces__action__MaintenanceSession_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MaintenanceSession_Goal>, size: usize) -> bool;
    fn maintenance_interfaces__action__MaintenanceSession_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MaintenanceSession_Goal>);
    fn maintenance_interfaces__action__MaintenanceSession_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MaintenanceSession_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<MaintenanceSession_Goal>) -> bool;
}

// Corresponds to maintenance_interfaces__action__MaintenanceSession_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MaintenanceSession_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub service_floors: rosidl_runtime_rs::Sequence<i32>,

}



impl Default for MaintenanceSession_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maintenance_interfaces__action__MaintenanceSession_Goal__init(&mut msg as *mut _) {
        panic!("Call to maintenance_interfaces__action__MaintenanceSession_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MaintenanceSession_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__MaintenanceSession_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__MaintenanceSession_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__MaintenanceSession_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MaintenanceSession_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MaintenanceSession_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "maintenance_interfaces/action/MaintenanceSession_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__MaintenanceSession_Goal() }
  }
}


#[link(name = "maintenance_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__MaintenanceSession_Result() -> *const std::ffi::c_void;
}

#[link(name = "maintenance_interfaces__rosidl_generator_c")]
extern "C" {
    fn maintenance_interfaces__action__MaintenanceSession_Result__init(msg: *mut MaintenanceSession_Result) -> bool;
    fn maintenance_interfaces__action__MaintenanceSession_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MaintenanceSession_Result>, size: usize) -> bool;
    fn maintenance_interfaces__action__MaintenanceSession_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MaintenanceSession_Result>);
    fn maintenance_interfaces__action__MaintenanceSession_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MaintenanceSession_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<MaintenanceSession_Result>) -> bool;
}

// Corresponds to maintenance_interfaces__action__MaintenanceSession_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MaintenanceSession_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub report_path: rosidl_runtime_rs::String,

}



impl Default for MaintenanceSession_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maintenance_interfaces__action__MaintenanceSession_Result__init(&mut msg as *mut _) {
        panic!("Call to maintenance_interfaces__action__MaintenanceSession_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MaintenanceSession_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__MaintenanceSession_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__MaintenanceSession_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__MaintenanceSession_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MaintenanceSession_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MaintenanceSession_Result where Self: Sized {
  const TYPE_NAME: &'static str = "maintenance_interfaces/action/MaintenanceSession_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__MaintenanceSession_Result() }
  }
}


#[link(name = "maintenance_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__MaintenanceSession_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "maintenance_interfaces__rosidl_generator_c")]
extern "C" {
    fn maintenance_interfaces__action__MaintenanceSession_Feedback__init(msg: *mut MaintenanceSession_Feedback) -> bool;
    fn maintenance_interfaces__action__MaintenanceSession_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MaintenanceSession_Feedback>, size: usize) -> bool;
    fn maintenance_interfaces__action__MaintenanceSession_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MaintenanceSession_Feedback>);
    fn maintenance_interfaces__action__MaintenanceSession_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MaintenanceSession_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<MaintenanceSession_Feedback>) -> bool;
}

// Corresponds to maintenance_interfaces__action__MaintenanceSession_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MaintenanceSession_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_floor: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_step: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub progress: f32,

}



impl Default for MaintenanceSession_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maintenance_interfaces__action__MaintenanceSession_Feedback__init(&mut msg as *mut _) {
        panic!("Call to maintenance_interfaces__action__MaintenanceSession_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MaintenanceSession_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__MaintenanceSession_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__MaintenanceSession_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__MaintenanceSession_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MaintenanceSession_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MaintenanceSession_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "maintenance_interfaces/action/MaintenanceSession_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__MaintenanceSession_Feedback() }
  }
}


#[link(name = "maintenance_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__MaintenanceSession_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "maintenance_interfaces__rosidl_generator_c")]
extern "C" {
    fn maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__init(msg: *mut MaintenanceSession_FeedbackMessage) -> bool;
    fn maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MaintenanceSession_FeedbackMessage>, size: usize) -> bool;
    fn maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MaintenanceSession_FeedbackMessage>);
    fn maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MaintenanceSession_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<MaintenanceSession_FeedbackMessage>) -> bool;
}

// Corresponds to maintenance_interfaces__action__MaintenanceSession_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MaintenanceSession_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::MaintenanceSession_Feedback,

}



impl Default for MaintenanceSession_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MaintenanceSession_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MaintenanceSession_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MaintenanceSession_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "maintenance_interfaces/action/MaintenanceSession_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__MaintenanceSession_FeedbackMessage() }
  }
}




#[link(name = "maintenance_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__SimpleTask_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "maintenance_interfaces__rosidl_generator_c")]
extern "C" {
    fn maintenance_interfaces__action__SimpleTask_SendGoal_Request__init(msg: *mut SimpleTask_SendGoal_Request) -> bool;
    fn maintenance_interfaces__action__SimpleTask_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SimpleTask_SendGoal_Request>, size: usize) -> bool;
    fn maintenance_interfaces__action__SimpleTask_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SimpleTask_SendGoal_Request>);
    fn maintenance_interfaces__action__SimpleTask_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SimpleTask_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SimpleTask_SendGoal_Request>) -> bool;
}

// Corresponds to maintenance_interfaces__action__SimpleTask_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SimpleTask_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::SimpleTask_Goal,

}



impl Default for SimpleTask_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maintenance_interfaces__action__SimpleTask_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to maintenance_interfaces__action__SimpleTask_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SimpleTask_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__SimpleTask_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__SimpleTask_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__SimpleTask_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SimpleTask_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SimpleTask_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "maintenance_interfaces/action/SimpleTask_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__SimpleTask_SendGoal_Request() }
  }
}


#[link(name = "maintenance_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__SimpleTask_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "maintenance_interfaces__rosidl_generator_c")]
extern "C" {
    fn maintenance_interfaces__action__SimpleTask_SendGoal_Response__init(msg: *mut SimpleTask_SendGoal_Response) -> bool;
    fn maintenance_interfaces__action__SimpleTask_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SimpleTask_SendGoal_Response>, size: usize) -> bool;
    fn maintenance_interfaces__action__SimpleTask_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SimpleTask_SendGoal_Response>);
    fn maintenance_interfaces__action__SimpleTask_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SimpleTask_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SimpleTask_SendGoal_Response>) -> bool;
}

// Corresponds to maintenance_interfaces__action__SimpleTask_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SimpleTask_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for SimpleTask_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maintenance_interfaces__action__SimpleTask_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to maintenance_interfaces__action__SimpleTask_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SimpleTask_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__SimpleTask_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__SimpleTask_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__SimpleTask_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SimpleTask_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SimpleTask_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "maintenance_interfaces/action/SimpleTask_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__SimpleTask_SendGoal_Response() }
  }
}


#[link(name = "maintenance_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__SimpleTask_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "maintenance_interfaces__rosidl_generator_c")]
extern "C" {
    fn maintenance_interfaces__action__SimpleTask_GetResult_Request__init(msg: *mut SimpleTask_GetResult_Request) -> bool;
    fn maintenance_interfaces__action__SimpleTask_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SimpleTask_GetResult_Request>, size: usize) -> bool;
    fn maintenance_interfaces__action__SimpleTask_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SimpleTask_GetResult_Request>);
    fn maintenance_interfaces__action__SimpleTask_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SimpleTask_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SimpleTask_GetResult_Request>) -> bool;
}

// Corresponds to maintenance_interfaces__action__SimpleTask_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SimpleTask_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for SimpleTask_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maintenance_interfaces__action__SimpleTask_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to maintenance_interfaces__action__SimpleTask_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SimpleTask_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__SimpleTask_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__SimpleTask_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__SimpleTask_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SimpleTask_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SimpleTask_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "maintenance_interfaces/action/SimpleTask_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__SimpleTask_GetResult_Request() }
  }
}


#[link(name = "maintenance_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__SimpleTask_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "maintenance_interfaces__rosidl_generator_c")]
extern "C" {
    fn maintenance_interfaces__action__SimpleTask_GetResult_Response__init(msg: *mut SimpleTask_GetResult_Response) -> bool;
    fn maintenance_interfaces__action__SimpleTask_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SimpleTask_GetResult_Response>, size: usize) -> bool;
    fn maintenance_interfaces__action__SimpleTask_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SimpleTask_GetResult_Response>);
    fn maintenance_interfaces__action__SimpleTask_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SimpleTask_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SimpleTask_GetResult_Response>) -> bool;
}

// Corresponds to maintenance_interfaces__action__SimpleTask_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SimpleTask_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::SimpleTask_Result,

}



impl Default for SimpleTask_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maintenance_interfaces__action__SimpleTask_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to maintenance_interfaces__action__SimpleTask_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SimpleTask_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__SimpleTask_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__SimpleTask_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__SimpleTask_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SimpleTask_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SimpleTask_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "maintenance_interfaces/action/SimpleTask_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__SimpleTask_GetResult_Response() }
  }
}


#[link(name = "maintenance_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__MaintenanceSession_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "maintenance_interfaces__rosidl_generator_c")]
extern "C" {
    fn maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__init(msg: *mut MaintenanceSession_SendGoal_Request) -> bool;
    fn maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MaintenanceSession_SendGoal_Request>, size: usize) -> bool;
    fn maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MaintenanceSession_SendGoal_Request>);
    fn maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MaintenanceSession_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MaintenanceSession_SendGoal_Request>) -> bool;
}

// Corresponds to maintenance_interfaces__action__MaintenanceSession_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MaintenanceSession_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::MaintenanceSession_Goal,

}



impl Default for MaintenanceSession_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MaintenanceSession_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MaintenanceSession_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MaintenanceSession_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "maintenance_interfaces/action/MaintenanceSession_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__MaintenanceSession_SendGoal_Request() }
  }
}


#[link(name = "maintenance_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__MaintenanceSession_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "maintenance_interfaces__rosidl_generator_c")]
extern "C" {
    fn maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__init(msg: *mut MaintenanceSession_SendGoal_Response) -> bool;
    fn maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MaintenanceSession_SendGoal_Response>, size: usize) -> bool;
    fn maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MaintenanceSession_SendGoal_Response>);
    fn maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MaintenanceSession_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MaintenanceSession_SendGoal_Response>) -> bool;
}

// Corresponds to maintenance_interfaces__action__MaintenanceSession_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MaintenanceSession_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for MaintenanceSession_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MaintenanceSession_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MaintenanceSession_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MaintenanceSession_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "maintenance_interfaces/action/MaintenanceSession_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__MaintenanceSession_SendGoal_Response() }
  }
}


#[link(name = "maintenance_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__MaintenanceSession_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "maintenance_interfaces__rosidl_generator_c")]
extern "C" {
    fn maintenance_interfaces__action__MaintenanceSession_GetResult_Request__init(msg: *mut MaintenanceSession_GetResult_Request) -> bool;
    fn maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MaintenanceSession_GetResult_Request>, size: usize) -> bool;
    fn maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MaintenanceSession_GetResult_Request>);
    fn maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MaintenanceSession_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MaintenanceSession_GetResult_Request>) -> bool;
}

// Corresponds to maintenance_interfaces__action__MaintenanceSession_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MaintenanceSession_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for MaintenanceSession_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maintenance_interfaces__action__MaintenanceSession_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to maintenance_interfaces__action__MaintenanceSession_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MaintenanceSession_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MaintenanceSession_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MaintenanceSession_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "maintenance_interfaces/action/MaintenanceSession_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__MaintenanceSession_GetResult_Request() }
  }
}


#[link(name = "maintenance_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__MaintenanceSession_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "maintenance_interfaces__rosidl_generator_c")]
extern "C" {
    fn maintenance_interfaces__action__MaintenanceSession_GetResult_Response__init(msg: *mut MaintenanceSession_GetResult_Response) -> bool;
    fn maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MaintenanceSession_GetResult_Response>, size: usize) -> bool;
    fn maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MaintenanceSession_GetResult_Response>);
    fn maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MaintenanceSession_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MaintenanceSession_GetResult_Response>) -> bool;
}

// Corresponds to maintenance_interfaces__action__MaintenanceSession_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MaintenanceSession_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::MaintenanceSession_Result,

}



impl Default for MaintenanceSession_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maintenance_interfaces__action__MaintenanceSession_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to maintenance_interfaces__action__MaintenanceSession_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MaintenanceSession_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MaintenanceSession_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MaintenanceSession_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "maintenance_interfaces/action/MaintenanceSession_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maintenance_interfaces__action__MaintenanceSession_GetResult_Response() }
  }
}






#[link(name = "maintenance_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__maintenance_interfaces__action__SimpleTask_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to maintenance_interfaces__action__SimpleTask_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct SimpleTask_SendGoal;

impl rosidl_runtime_rs::Service for SimpleTask_SendGoal {
    type Request = SimpleTask_SendGoal_Request;
    type Response = SimpleTask_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__maintenance_interfaces__action__SimpleTask_SendGoal() }
    }
}




#[link(name = "maintenance_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__maintenance_interfaces__action__SimpleTask_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to maintenance_interfaces__action__SimpleTask_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct SimpleTask_GetResult;

impl rosidl_runtime_rs::Service for SimpleTask_GetResult {
    type Request = SimpleTask_GetResult_Request;
    type Response = SimpleTask_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__maintenance_interfaces__action__SimpleTask_GetResult() }
    }
}




#[link(name = "maintenance_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__maintenance_interfaces__action__MaintenanceSession_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to maintenance_interfaces__action__MaintenanceSession_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct MaintenanceSession_SendGoal;

impl rosidl_runtime_rs::Service for MaintenanceSession_SendGoal {
    type Request = MaintenanceSession_SendGoal_Request;
    type Response = MaintenanceSession_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__maintenance_interfaces__action__MaintenanceSession_SendGoal() }
    }
}




#[link(name = "maintenance_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__maintenance_interfaces__action__MaintenanceSession_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to maintenance_interfaces__action__MaintenanceSession_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct MaintenanceSession_GetResult;

impl rosidl_runtime_rs::Service for MaintenanceSession_GetResult {
    type Request = MaintenanceSession_GetResult_Request;
    type Response = MaintenanceSession_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__maintenance_interfaces__action__MaintenanceSession_GetResult() }
    }
}


