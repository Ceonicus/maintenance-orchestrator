// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from maintenance_interfaces:action/MaintenanceSession.idl
// generated code does not contain a copyright notice
#include "maintenance_interfaces/action/detail/maintenance_session__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `service_floors`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
maintenance_interfaces__action__MaintenanceSession_Goal__init(maintenance_interfaces__action__MaintenanceSession_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // service_floors
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->service_floors, 0)) {
    maintenance_interfaces__action__MaintenanceSession_Goal__fini(msg);
    return false;
  }
  return true;
}

void
maintenance_interfaces__action__MaintenanceSession_Goal__fini(maintenance_interfaces__action__MaintenanceSession_Goal * msg)
{
  if (!msg) {
    return;
  }
  // service_floors
  rosidl_runtime_c__int32__Sequence__fini(&msg->service_floors);
}

bool
maintenance_interfaces__action__MaintenanceSession_Goal__are_equal(const maintenance_interfaces__action__MaintenanceSession_Goal * lhs, const maintenance_interfaces__action__MaintenanceSession_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // service_floors
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->service_floors), &(rhs->service_floors)))
  {
    return false;
  }
  return true;
}

bool
maintenance_interfaces__action__MaintenanceSession_Goal__copy(
  const maintenance_interfaces__action__MaintenanceSession_Goal * input,
  maintenance_interfaces__action__MaintenanceSession_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // service_floors
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->service_floors), &(output->service_floors)))
  {
    return false;
  }
  return true;
}

maintenance_interfaces__action__MaintenanceSession_Goal *
maintenance_interfaces__action__MaintenanceSession_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_Goal * msg = (maintenance_interfaces__action__MaintenanceSession_Goal *)allocator.allocate(sizeof(maintenance_interfaces__action__MaintenanceSession_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(maintenance_interfaces__action__MaintenanceSession_Goal));
  bool success = maintenance_interfaces__action__MaintenanceSession_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
maintenance_interfaces__action__MaintenanceSession_Goal__destroy(maintenance_interfaces__action__MaintenanceSession_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    maintenance_interfaces__action__MaintenanceSession_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
maintenance_interfaces__action__MaintenanceSession_Goal__Sequence__init(maintenance_interfaces__action__MaintenanceSession_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_Goal * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(maintenance_interfaces__action__MaintenanceSession_Goal)) {
      return false;
    }
    data = (maintenance_interfaces__action__MaintenanceSession_Goal *)allocator.zero_allocate(size, sizeof(maintenance_interfaces__action__MaintenanceSession_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = maintenance_interfaces__action__MaintenanceSession_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        maintenance_interfaces__action__MaintenanceSession_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
maintenance_interfaces__action__MaintenanceSession_Goal__Sequence__fini(maintenance_interfaces__action__MaintenanceSession_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      maintenance_interfaces__action__MaintenanceSession_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

maintenance_interfaces__action__MaintenanceSession_Goal__Sequence *
maintenance_interfaces__action__MaintenanceSession_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_Goal__Sequence * array = (maintenance_interfaces__action__MaintenanceSession_Goal__Sequence *)allocator.allocate(sizeof(maintenance_interfaces__action__MaintenanceSession_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = maintenance_interfaces__action__MaintenanceSession_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
maintenance_interfaces__action__MaintenanceSession_Goal__Sequence__destroy(maintenance_interfaces__action__MaintenanceSession_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    maintenance_interfaces__action__MaintenanceSession_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
maintenance_interfaces__action__MaintenanceSession_Goal__Sequence__are_equal(const maintenance_interfaces__action__MaintenanceSession_Goal__Sequence * lhs, const maintenance_interfaces__action__MaintenanceSession_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!maintenance_interfaces__action__MaintenanceSession_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
maintenance_interfaces__action__MaintenanceSession_Goal__Sequence__copy(
  const maintenance_interfaces__action__MaintenanceSession_Goal__Sequence * input,
  maintenance_interfaces__action__MaintenanceSession_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(maintenance_interfaces__action__MaintenanceSession_Goal)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(maintenance_interfaces__action__MaintenanceSession_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    maintenance_interfaces__action__MaintenanceSession_Goal * data =
      (maintenance_interfaces__action__MaintenanceSession_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!maintenance_interfaces__action__MaintenanceSession_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          maintenance_interfaces__action__MaintenanceSession_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!maintenance_interfaces__action__MaintenanceSession_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `report_path`
#include "rosidl_runtime_c/string_functions.h"

bool
maintenance_interfaces__action__MaintenanceSession_Result__init(maintenance_interfaces__action__MaintenanceSession_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // report_path
  if (!rosidl_runtime_c__String__init(&msg->report_path)) {
    maintenance_interfaces__action__MaintenanceSession_Result__fini(msg);
    return false;
  }
  return true;
}

void
maintenance_interfaces__action__MaintenanceSession_Result__fini(maintenance_interfaces__action__MaintenanceSession_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // report_path
  rosidl_runtime_c__String__fini(&msg->report_path);
}

bool
maintenance_interfaces__action__MaintenanceSession_Result__are_equal(const maintenance_interfaces__action__MaintenanceSession_Result * lhs, const maintenance_interfaces__action__MaintenanceSession_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // report_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->report_path), &(rhs->report_path)))
  {
    return false;
  }
  return true;
}

bool
maintenance_interfaces__action__MaintenanceSession_Result__copy(
  const maintenance_interfaces__action__MaintenanceSession_Result * input,
  maintenance_interfaces__action__MaintenanceSession_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // report_path
  if (!rosidl_runtime_c__String__copy(
      &(input->report_path), &(output->report_path)))
  {
    return false;
  }
  return true;
}

maintenance_interfaces__action__MaintenanceSession_Result *
maintenance_interfaces__action__MaintenanceSession_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_Result * msg = (maintenance_interfaces__action__MaintenanceSession_Result *)allocator.allocate(sizeof(maintenance_interfaces__action__MaintenanceSession_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(maintenance_interfaces__action__MaintenanceSession_Result));
  bool success = maintenance_interfaces__action__MaintenanceSession_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
maintenance_interfaces__action__MaintenanceSession_Result__destroy(maintenance_interfaces__action__MaintenanceSession_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    maintenance_interfaces__action__MaintenanceSession_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
maintenance_interfaces__action__MaintenanceSession_Result__Sequence__init(maintenance_interfaces__action__MaintenanceSession_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_Result * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(maintenance_interfaces__action__MaintenanceSession_Result)) {
      return false;
    }
    data = (maintenance_interfaces__action__MaintenanceSession_Result *)allocator.zero_allocate(size, sizeof(maintenance_interfaces__action__MaintenanceSession_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = maintenance_interfaces__action__MaintenanceSession_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        maintenance_interfaces__action__MaintenanceSession_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
maintenance_interfaces__action__MaintenanceSession_Result__Sequence__fini(maintenance_interfaces__action__MaintenanceSession_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      maintenance_interfaces__action__MaintenanceSession_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

maintenance_interfaces__action__MaintenanceSession_Result__Sequence *
maintenance_interfaces__action__MaintenanceSession_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_Result__Sequence * array = (maintenance_interfaces__action__MaintenanceSession_Result__Sequence *)allocator.allocate(sizeof(maintenance_interfaces__action__MaintenanceSession_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = maintenance_interfaces__action__MaintenanceSession_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
maintenance_interfaces__action__MaintenanceSession_Result__Sequence__destroy(maintenance_interfaces__action__MaintenanceSession_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    maintenance_interfaces__action__MaintenanceSession_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
maintenance_interfaces__action__MaintenanceSession_Result__Sequence__are_equal(const maintenance_interfaces__action__MaintenanceSession_Result__Sequence * lhs, const maintenance_interfaces__action__MaintenanceSession_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!maintenance_interfaces__action__MaintenanceSession_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
maintenance_interfaces__action__MaintenanceSession_Result__Sequence__copy(
  const maintenance_interfaces__action__MaintenanceSession_Result__Sequence * input,
  maintenance_interfaces__action__MaintenanceSession_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(maintenance_interfaces__action__MaintenanceSession_Result)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(maintenance_interfaces__action__MaintenanceSession_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    maintenance_interfaces__action__MaintenanceSession_Result * data =
      (maintenance_interfaces__action__MaintenanceSession_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!maintenance_interfaces__action__MaintenanceSession_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          maintenance_interfaces__action__MaintenanceSession_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!maintenance_interfaces__action__MaintenanceSession_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `current_step`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
maintenance_interfaces__action__MaintenanceSession_Feedback__init(maintenance_interfaces__action__MaintenanceSession_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_floor
  // current_step
  if (!rosidl_runtime_c__String__init(&msg->current_step)) {
    maintenance_interfaces__action__MaintenanceSession_Feedback__fini(msg);
    return false;
  }
  // progress
  return true;
}

void
maintenance_interfaces__action__MaintenanceSession_Feedback__fini(maintenance_interfaces__action__MaintenanceSession_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_floor
  // current_step
  rosidl_runtime_c__String__fini(&msg->current_step);
  // progress
}

bool
maintenance_interfaces__action__MaintenanceSession_Feedback__are_equal(const maintenance_interfaces__action__MaintenanceSession_Feedback * lhs, const maintenance_interfaces__action__MaintenanceSession_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_floor
  if (lhs->current_floor != rhs->current_floor) {
    return false;
  }
  // current_step
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_step), &(rhs->current_step)))
  {
    return false;
  }
  // progress
  if (lhs->progress != rhs->progress) {
    return false;
  }
  return true;
}

bool
maintenance_interfaces__action__MaintenanceSession_Feedback__copy(
  const maintenance_interfaces__action__MaintenanceSession_Feedback * input,
  maintenance_interfaces__action__MaintenanceSession_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_floor
  output->current_floor = input->current_floor;
  // current_step
  if (!rosidl_runtime_c__String__copy(
      &(input->current_step), &(output->current_step)))
  {
    return false;
  }
  // progress
  output->progress = input->progress;
  return true;
}

maintenance_interfaces__action__MaintenanceSession_Feedback *
maintenance_interfaces__action__MaintenanceSession_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_Feedback * msg = (maintenance_interfaces__action__MaintenanceSession_Feedback *)allocator.allocate(sizeof(maintenance_interfaces__action__MaintenanceSession_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(maintenance_interfaces__action__MaintenanceSession_Feedback));
  bool success = maintenance_interfaces__action__MaintenanceSession_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
maintenance_interfaces__action__MaintenanceSession_Feedback__destroy(maintenance_interfaces__action__MaintenanceSession_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    maintenance_interfaces__action__MaintenanceSession_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
maintenance_interfaces__action__MaintenanceSession_Feedback__Sequence__init(maintenance_interfaces__action__MaintenanceSession_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_Feedback * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(maintenance_interfaces__action__MaintenanceSession_Feedback)) {
      return false;
    }
    data = (maintenance_interfaces__action__MaintenanceSession_Feedback *)allocator.zero_allocate(size, sizeof(maintenance_interfaces__action__MaintenanceSession_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = maintenance_interfaces__action__MaintenanceSession_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        maintenance_interfaces__action__MaintenanceSession_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
maintenance_interfaces__action__MaintenanceSession_Feedback__Sequence__fini(maintenance_interfaces__action__MaintenanceSession_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      maintenance_interfaces__action__MaintenanceSession_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

maintenance_interfaces__action__MaintenanceSession_Feedback__Sequence *
maintenance_interfaces__action__MaintenanceSession_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_Feedback__Sequence * array = (maintenance_interfaces__action__MaintenanceSession_Feedback__Sequence *)allocator.allocate(sizeof(maintenance_interfaces__action__MaintenanceSession_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = maintenance_interfaces__action__MaintenanceSession_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
maintenance_interfaces__action__MaintenanceSession_Feedback__Sequence__destroy(maintenance_interfaces__action__MaintenanceSession_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    maintenance_interfaces__action__MaintenanceSession_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
maintenance_interfaces__action__MaintenanceSession_Feedback__Sequence__are_equal(const maintenance_interfaces__action__MaintenanceSession_Feedback__Sequence * lhs, const maintenance_interfaces__action__MaintenanceSession_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!maintenance_interfaces__action__MaintenanceSession_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
maintenance_interfaces__action__MaintenanceSession_Feedback__Sequence__copy(
  const maintenance_interfaces__action__MaintenanceSession_Feedback__Sequence * input,
  maintenance_interfaces__action__MaintenanceSession_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(maintenance_interfaces__action__MaintenanceSession_Feedback)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(maintenance_interfaces__action__MaintenanceSession_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    maintenance_interfaces__action__MaintenanceSession_Feedback * data =
      (maintenance_interfaces__action__MaintenanceSession_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!maintenance_interfaces__action__MaintenanceSession_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          maintenance_interfaces__action__MaintenanceSession_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!maintenance_interfaces__action__MaintenanceSession_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__functions.h"

bool
maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__init(maintenance_interfaces__action__MaintenanceSession_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!maintenance_interfaces__action__MaintenanceSession_Goal__init(&msg->goal)) {
    maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__fini(maintenance_interfaces__action__MaintenanceSession_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  maintenance_interfaces__action__MaintenanceSession_Goal__fini(&msg->goal);
}

bool
maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__are_equal(const maintenance_interfaces__action__MaintenanceSession_SendGoal_Request * lhs, const maintenance_interfaces__action__MaintenanceSession_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!maintenance_interfaces__action__MaintenanceSession_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__copy(
  const maintenance_interfaces__action__MaintenanceSession_SendGoal_Request * input,
  maintenance_interfaces__action__MaintenanceSession_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!maintenance_interfaces__action__MaintenanceSession_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

maintenance_interfaces__action__MaintenanceSession_SendGoal_Request *
maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_SendGoal_Request * msg = (maintenance_interfaces__action__MaintenanceSession_SendGoal_Request *)allocator.allocate(sizeof(maintenance_interfaces__action__MaintenanceSession_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(maintenance_interfaces__action__MaintenanceSession_SendGoal_Request));
  bool success = maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__destroy(maintenance_interfaces__action__MaintenanceSession_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence__init(maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_SendGoal_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(maintenance_interfaces__action__MaintenanceSession_SendGoal_Request)) {
      return false;
    }
    data = (maintenance_interfaces__action__MaintenanceSession_SendGoal_Request *)allocator.zero_allocate(size, sizeof(maintenance_interfaces__action__MaintenanceSession_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence__fini(maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence *
maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence * array = (maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence *)allocator.allocate(sizeof(maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence__destroy(maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence__are_equal(const maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence * lhs, const maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence__copy(
  const maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence * input,
  maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(maintenance_interfaces__action__MaintenanceSession_SendGoal_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(maintenance_interfaces__action__MaintenanceSession_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    maintenance_interfaces__action__MaintenanceSession_SendGoal_Request * data =
      (maintenance_interfaces__action__MaintenanceSession_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__init(maintenance_interfaces__action__MaintenanceSession_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__fini(maintenance_interfaces__action__MaintenanceSession_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__are_equal(const maintenance_interfaces__action__MaintenanceSession_SendGoal_Response * lhs, const maintenance_interfaces__action__MaintenanceSession_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__copy(
  const maintenance_interfaces__action__MaintenanceSession_SendGoal_Response * input,
  maintenance_interfaces__action__MaintenanceSession_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

maintenance_interfaces__action__MaintenanceSession_SendGoal_Response *
maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_SendGoal_Response * msg = (maintenance_interfaces__action__MaintenanceSession_SendGoal_Response *)allocator.allocate(sizeof(maintenance_interfaces__action__MaintenanceSession_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(maintenance_interfaces__action__MaintenanceSession_SendGoal_Response));
  bool success = maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__destroy(maintenance_interfaces__action__MaintenanceSession_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence__init(maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_SendGoal_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(maintenance_interfaces__action__MaintenanceSession_SendGoal_Response)) {
      return false;
    }
    data = (maintenance_interfaces__action__MaintenanceSession_SendGoal_Response *)allocator.zero_allocate(size, sizeof(maintenance_interfaces__action__MaintenanceSession_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence__fini(maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence *
maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence * array = (maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence *)allocator.allocate(sizeof(maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence__destroy(maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence__are_equal(const maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence * lhs, const maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence__copy(
  const maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence * input,
  maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(maintenance_interfaces__action__MaintenanceSession_SendGoal_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(maintenance_interfaces__action__MaintenanceSession_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    maintenance_interfaces__action__MaintenanceSession_SendGoal_Response * data =
      (maintenance_interfaces__action__MaintenanceSession_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__functions.h"

bool
maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__init(maintenance_interfaces__action__MaintenanceSession_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__fini(maintenance_interfaces__action__MaintenanceSession_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__are_equal(const maintenance_interfaces__action__MaintenanceSession_SendGoal_Event * lhs, const maintenance_interfaces__action__MaintenanceSession_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__copy(
  const maintenance_interfaces__action__MaintenanceSession_SendGoal_Event * input,
  maintenance_interfaces__action__MaintenanceSession_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!maintenance_interfaces__action__MaintenanceSession_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!maintenance_interfaces__action__MaintenanceSession_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

maintenance_interfaces__action__MaintenanceSession_SendGoal_Event *
maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_SendGoal_Event * msg = (maintenance_interfaces__action__MaintenanceSession_SendGoal_Event *)allocator.allocate(sizeof(maintenance_interfaces__action__MaintenanceSession_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(maintenance_interfaces__action__MaintenanceSession_SendGoal_Event));
  bool success = maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__destroy(maintenance_interfaces__action__MaintenanceSession_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__Sequence__init(maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_SendGoal_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(maintenance_interfaces__action__MaintenanceSession_SendGoal_Event)) {
      return false;
    }
    data = (maintenance_interfaces__action__MaintenanceSession_SendGoal_Event *)allocator.zero_allocate(size, sizeof(maintenance_interfaces__action__MaintenanceSession_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__Sequence__fini(maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__Sequence *
maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__Sequence * array = (maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__Sequence *)allocator.allocate(sizeof(maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__Sequence__destroy(maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__Sequence__are_equal(const maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__Sequence * lhs, const maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__Sequence__copy(
  const maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__Sequence * input,
  maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(maintenance_interfaces__action__MaintenanceSession_SendGoal_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(maintenance_interfaces__action__MaintenanceSession_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    maintenance_interfaces__action__MaintenanceSession_SendGoal_Event * data =
      (maintenance_interfaces__action__MaintenanceSession_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!maintenance_interfaces__action__MaintenanceSession_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
maintenance_interfaces__action__MaintenanceSession_GetResult_Request__init(maintenance_interfaces__action__MaintenanceSession_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    maintenance_interfaces__action__MaintenanceSession_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
maintenance_interfaces__action__MaintenanceSession_GetResult_Request__fini(maintenance_interfaces__action__MaintenanceSession_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
maintenance_interfaces__action__MaintenanceSession_GetResult_Request__are_equal(const maintenance_interfaces__action__MaintenanceSession_GetResult_Request * lhs, const maintenance_interfaces__action__MaintenanceSession_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
maintenance_interfaces__action__MaintenanceSession_GetResult_Request__copy(
  const maintenance_interfaces__action__MaintenanceSession_GetResult_Request * input,
  maintenance_interfaces__action__MaintenanceSession_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

maintenance_interfaces__action__MaintenanceSession_GetResult_Request *
maintenance_interfaces__action__MaintenanceSession_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_GetResult_Request * msg = (maintenance_interfaces__action__MaintenanceSession_GetResult_Request *)allocator.allocate(sizeof(maintenance_interfaces__action__MaintenanceSession_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(maintenance_interfaces__action__MaintenanceSession_GetResult_Request));
  bool success = maintenance_interfaces__action__MaintenanceSession_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
maintenance_interfaces__action__MaintenanceSession_GetResult_Request__destroy(maintenance_interfaces__action__MaintenanceSession_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    maintenance_interfaces__action__MaintenanceSession_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence__init(maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_GetResult_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(maintenance_interfaces__action__MaintenanceSession_GetResult_Request)) {
      return false;
    }
    data = (maintenance_interfaces__action__MaintenanceSession_GetResult_Request *)allocator.zero_allocate(size, sizeof(maintenance_interfaces__action__MaintenanceSession_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = maintenance_interfaces__action__MaintenanceSession_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        maintenance_interfaces__action__MaintenanceSession_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence__fini(maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      maintenance_interfaces__action__MaintenanceSession_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence *
maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence * array = (maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence *)allocator.allocate(sizeof(maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence__destroy(maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence__are_equal(const maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence * lhs, const maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!maintenance_interfaces__action__MaintenanceSession_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence__copy(
  const maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence * input,
  maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(maintenance_interfaces__action__MaintenanceSession_GetResult_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(maintenance_interfaces__action__MaintenanceSession_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    maintenance_interfaces__action__MaintenanceSession_GetResult_Request * data =
      (maintenance_interfaces__action__MaintenanceSession_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!maintenance_interfaces__action__MaintenanceSession_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          maintenance_interfaces__action__MaintenanceSession_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!maintenance_interfaces__action__MaintenanceSession_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__functions.h"

bool
maintenance_interfaces__action__MaintenanceSession_GetResult_Response__init(maintenance_interfaces__action__MaintenanceSession_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!maintenance_interfaces__action__MaintenanceSession_Result__init(&msg->result)) {
    maintenance_interfaces__action__MaintenanceSession_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
maintenance_interfaces__action__MaintenanceSession_GetResult_Response__fini(maintenance_interfaces__action__MaintenanceSession_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  maintenance_interfaces__action__MaintenanceSession_Result__fini(&msg->result);
}

bool
maintenance_interfaces__action__MaintenanceSession_GetResult_Response__are_equal(const maintenance_interfaces__action__MaintenanceSession_GetResult_Response * lhs, const maintenance_interfaces__action__MaintenanceSession_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!maintenance_interfaces__action__MaintenanceSession_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
maintenance_interfaces__action__MaintenanceSession_GetResult_Response__copy(
  const maintenance_interfaces__action__MaintenanceSession_GetResult_Response * input,
  maintenance_interfaces__action__MaintenanceSession_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!maintenance_interfaces__action__MaintenanceSession_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

maintenance_interfaces__action__MaintenanceSession_GetResult_Response *
maintenance_interfaces__action__MaintenanceSession_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_GetResult_Response * msg = (maintenance_interfaces__action__MaintenanceSession_GetResult_Response *)allocator.allocate(sizeof(maintenance_interfaces__action__MaintenanceSession_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(maintenance_interfaces__action__MaintenanceSession_GetResult_Response));
  bool success = maintenance_interfaces__action__MaintenanceSession_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
maintenance_interfaces__action__MaintenanceSession_GetResult_Response__destroy(maintenance_interfaces__action__MaintenanceSession_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    maintenance_interfaces__action__MaintenanceSession_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence__init(maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_GetResult_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(maintenance_interfaces__action__MaintenanceSession_GetResult_Response)) {
      return false;
    }
    data = (maintenance_interfaces__action__MaintenanceSession_GetResult_Response *)allocator.zero_allocate(size, sizeof(maintenance_interfaces__action__MaintenanceSession_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = maintenance_interfaces__action__MaintenanceSession_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        maintenance_interfaces__action__MaintenanceSession_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence__fini(maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      maintenance_interfaces__action__MaintenanceSession_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence *
maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence * array = (maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence *)allocator.allocate(sizeof(maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence__destroy(maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence__are_equal(const maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence * lhs, const maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!maintenance_interfaces__action__MaintenanceSession_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence__copy(
  const maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence * input,
  maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(maintenance_interfaces__action__MaintenanceSession_GetResult_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(maintenance_interfaces__action__MaintenanceSession_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    maintenance_interfaces__action__MaintenanceSession_GetResult_Response * data =
      (maintenance_interfaces__action__MaintenanceSession_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!maintenance_interfaces__action__MaintenanceSession_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          maintenance_interfaces__action__MaintenanceSession_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!maintenance_interfaces__action__MaintenanceSession_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__functions.h"

bool
maintenance_interfaces__action__MaintenanceSession_GetResult_Event__init(maintenance_interfaces__action__MaintenanceSession_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    maintenance_interfaces__action__MaintenanceSession_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence__init(&msg->request, 0)) {
    maintenance_interfaces__action__MaintenanceSession_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence__init(&msg->response, 0)) {
    maintenance_interfaces__action__MaintenanceSession_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
maintenance_interfaces__action__MaintenanceSession_GetResult_Event__fini(maintenance_interfaces__action__MaintenanceSession_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence__fini(&msg->request);
  // response
  maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence__fini(&msg->response);
}

bool
maintenance_interfaces__action__MaintenanceSession_GetResult_Event__are_equal(const maintenance_interfaces__action__MaintenanceSession_GetResult_Event * lhs, const maintenance_interfaces__action__MaintenanceSession_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
maintenance_interfaces__action__MaintenanceSession_GetResult_Event__copy(
  const maintenance_interfaces__action__MaintenanceSession_GetResult_Event * input,
  maintenance_interfaces__action__MaintenanceSession_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!maintenance_interfaces__action__MaintenanceSession_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!maintenance_interfaces__action__MaintenanceSession_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

maintenance_interfaces__action__MaintenanceSession_GetResult_Event *
maintenance_interfaces__action__MaintenanceSession_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_GetResult_Event * msg = (maintenance_interfaces__action__MaintenanceSession_GetResult_Event *)allocator.allocate(sizeof(maintenance_interfaces__action__MaintenanceSession_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(maintenance_interfaces__action__MaintenanceSession_GetResult_Event));
  bool success = maintenance_interfaces__action__MaintenanceSession_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
maintenance_interfaces__action__MaintenanceSession_GetResult_Event__destroy(maintenance_interfaces__action__MaintenanceSession_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    maintenance_interfaces__action__MaintenanceSession_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
maintenance_interfaces__action__MaintenanceSession_GetResult_Event__Sequence__init(maintenance_interfaces__action__MaintenanceSession_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_GetResult_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(maintenance_interfaces__action__MaintenanceSession_GetResult_Event)) {
      return false;
    }
    data = (maintenance_interfaces__action__MaintenanceSession_GetResult_Event *)allocator.zero_allocate(size, sizeof(maintenance_interfaces__action__MaintenanceSession_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = maintenance_interfaces__action__MaintenanceSession_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        maintenance_interfaces__action__MaintenanceSession_GetResult_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
maintenance_interfaces__action__MaintenanceSession_GetResult_Event__Sequence__fini(maintenance_interfaces__action__MaintenanceSession_GetResult_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      maintenance_interfaces__action__MaintenanceSession_GetResult_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

maintenance_interfaces__action__MaintenanceSession_GetResult_Event__Sequence *
maintenance_interfaces__action__MaintenanceSession_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_GetResult_Event__Sequence * array = (maintenance_interfaces__action__MaintenanceSession_GetResult_Event__Sequence *)allocator.allocate(sizeof(maintenance_interfaces__action__MaintenanceSession_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = maintenance_interfaces__action__MaintenanceSession_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
maintenance_interfaces__action__MaintenanceSession_GetResult_Event__Sequence__destroy(maintenance_interfaces__action__MaintenanceSession_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    maintenance_interfaces__action__MaintenanceSession_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
maintenance_interfaces__action__MaintenanceSession_GetResult_Event__Sequence__are_equal(const maintenance_interfaces__action__MaintenanceSession_GetResult_Event__Sequence * lhs, const maintenance_interfaces__action__MaintenanceSession_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!maintenance_interfaces__action__MaintenanceSession_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
maintenance_interfaces__action__MaintenanceSession_GetResult_Event__Sequence__copy(
  const maintenance_interfaces__action__MaintenanceSession_GetResult_Event__Sequence * input,
  maintenance_interfaces__action__MaintenanceSession_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(maintenance_interfaces__action__MaintenanceSession_GetResult_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(maintenance_interfaces__action__MaintenanceSession_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    maintenance_interfaces__action__MaintenanceSession_GetResult_Event * data =
      (maintenance_interfaces__action__MaintenanceSession_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!maintenance_interfaces__action__MaintenanceSession_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          maintenance_interfaces__action__MaintenanceSession_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!maintenance_interfaces__action__MaintenanceSession_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "maintenance_interfaces/action/detail/maintenance_session__functions.h"

bool
maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__init(maintenance_interfaces__action__MaintenanceSession_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!maintenance_interfaces__action__MaintenanceSession_Feedback__init(&msg->feedback)) {
    maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__fini(maintenance_interfaces__action__MaintenanceSession_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  maintenance_interfaces__action__MaintenanceSession_Feedback__fini(&msg->feedback);
}

bool
maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__are_equal(const maintenance_interfaces__action__MaintenanceSession_FeedbackMessage * lhs, const maintenance_interfaces__action__MaintenanceSession_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!maintenance_interfaces__action__MaintenanceSession_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__copy(
  const maintenance_interfaces__action__MaintenanceSession_FeedbackMessage * input,
  maintenance_interfaces__action__MaintenanceSession_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!maintenance_interfaces__action__MaintenanceSession_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

maintenance_interfaces__action__MaintenanceSession_FeedbackMessage *
maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_FeedbackMessage * msg = (maintenance_interfaces__action__MaintenanceSession_FeedbackMessage *)allocator.allocate(sizeof(maintenance_interfaces__action__MaintenanceSession_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(maintenance_interfaces__action__MaintenanceSession_FeedbackMessage));
  bool success = maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__destroy(maintenance_interfaces__action__MaintenanceSession_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__Sequence__init(maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_FeedbackMessage * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(maintenance_interfaces__action__MaintenanceSession_FeedbackMessage)) {
      return false;
    }
    data = (maintenance_interfaces__action__MaintenanceSession_FeedbackMessage *)allocator.zero_allocate(size, sizeof(maintenance_interfaces__action__MaintenanceSession_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__Sequence__fini(maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__Sequence *
maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__Sequence * array = (maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__Sequence *)allocator.allocate(sizeof(maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__Sequence__destroy(maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__Sequence__are_equal(const maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__Sequence * lhs, const maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__Sequence__copy(
  const maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__Sequence * input,
  maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(maintenance_interfaces__action__MaintenanceSession_FeedbackMessage)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(maintenance_interfaces__action__MaintenanceSession_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    maintenance_interfaces__action__MaintenanceSession_FeedbackMessage * data =
      (maintenance_interfaces__action__MaintenanceSession_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!maintenance_interfaces__action__MaintenanceSession_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
