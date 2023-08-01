// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_building_map_msgs:msg/Graph.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH__STRUCT_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'vertices'
#include "rmf_building_map_msgs/msg/detail/graph_node__struct.hpp"
// Member 'edges'
#include "rmf_building_map_msgs/msg/detail/graph_edge__struct.hpp"
// Member 'params'
#include "rmf_building_map_msgs/msg/detail/param__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_building_map_msgs__msg__Graph __attribute__((deprecated))
#else
# define DEPRECATED__rmf_building_map_msgs__msg__Graph __declspec(deprecated)
#endif

namespace rmf_building_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Graph_
{
  using Type = Graph_<ContainerAllocator>;

  explicit Graph_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit Graph_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _vertices_type =
    std::vector<rmf_building_map_msgs::msg::GraphNode_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_building_map_msgs::msg::GraphNode_<ContainerAllocator>>>;
  _vertices_type vertices;
  using _edges_type =
    std::vector<rmf_building_map_msgs::msg::GraphEdge_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_building_map_msgs::msg::GraphEdge_<ContainerAllocator>>>;
  _edges_type edges;
  using _params_type =
    std::vector<rmf_building_map_msgs::msg::Param_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_building_map_msgs::msg::Param_<ContainerAllocator>>>;
  _params_type params;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__vertices(
    const std::vector<rmf_building_map_msgs::msg::GraphNode_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_building_map_msgs::msg::GraphNode_<ContainerAllocator>>> & _arg)
  {
    this->vertices = _arg;
    return *this;
  }
  Type & set__edges(
    const std::vector<rmf_building_map_msgs::msg::GraphEdge_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_building_map_msgs::msg::GraphEdge_<ContainerAllocator>>> & _arg)
  {
    this->edges = _arg;
    return *this;
  }
  Type & set__params(
    const std::vector<rmf_building_map_msgs::msg::Param_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_building_map_msgs::msg::Param_<ContainerAllocator>>> & _arg)
  {
    this->params = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_building_map_msgs::msg::Graph_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_building_map_msgs::msg::Graph_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_building_map_msgs::msg::Graph_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_building_map_msgs::msg::Graph_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_building_map_msgs::msg::Graph_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_building_map_msgs::msg::Graph_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_building_map_msgs::msg::Graph_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_building_map_msgs::msg::Graph_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_building_map_msgs::msg::Graph_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_building_map_msgs::msg::Graph_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_building_map_msgs__msg__Graph
    std::shared_ptr<rmf_building_map_msgs::msg::Graph_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_building_map_msgs__msg__Graph
    std::shared_ptr<rmf_building_map_msgs::msg::Graph_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Graph_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->vertices != other.vertices) {
      return false;
    }
    if (this->edges != other.edges) {
      return false;
    }
    if (this->params != other.params) {
      return false;
    }
    return true;
  }
  bool operator!=(const Graph_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Graph_

// alias to use template instance with default allocator
using Graph =
  rmf_building_map_msgs::msg::Graph_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_building_map_msgs

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH__STRUCT_HPP_
