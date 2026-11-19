# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target maintenance_interfaces::maintenance_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${maintenance_interfaces_TARGETS}.
if(maintenance_interfaces_TARGETS AND NOT TARGET maintenance_interfaces::maintenance_interfaces)
  add_library(maintenance_interfaces::maintenance_interfaces INTERFACE IMPORTED)
  set_target_properties(maintenance_interfaces::maintenance_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${maintenance_interfaces_TARGETS}")
endif()
