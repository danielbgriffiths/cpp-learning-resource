cmake_minimum_required(VERSION 3.27)
project(cpp_learning_resource)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cpp_learning_resource
        cpp-learning-resource/main.cpp
        cpp-learning-resource/algorithms/reverse-array/reverse-array.cpp
        cpp-learning-resource/algorithms/reverse-array/reverse-array.hpp
        cpp-learning-resource/algorithms/reverse-array/reverse-array.test.cpp)
