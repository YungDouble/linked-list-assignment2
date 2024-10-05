cmake_minimum_required(VERSION 3.29)
project(ex2_linked_list)

set(CMAKE_CXX_STANDARD 14)

add_executable(ex2_linked_list
    driver.cpp
    LinkedList.cpp
    Node.cpp
)
