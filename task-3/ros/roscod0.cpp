//
// Created by wlpdy on 2026/10/15.
//

#include <memory>

#include "rclcpp/rclcpp.hpp"

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<rclcpp::Node>("cpp_node");
    RCLCPP_INFO(node->get_logger(),"你好cppcode");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
