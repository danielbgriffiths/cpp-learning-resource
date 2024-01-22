cmake_minimum_required(VERSION 3.26)
project(cpp_learning_resource)

set(CMAKE_CXX_STANDARD 17)

add_executable(main_exec main.cpp) # executable target

include_directories(libs-algorithms)
add_subdirectory(libs-algorithms)

target_link_libraries(main_exec libs-algorithms) # main_exec (target) linked-to libs-algorithms (item)
# SEE: ... library type is dissimilar in that it is generally not linked to -- it is not used in the right-hand-side of the target_link_libraries() ...

add_subdirectory(Google_tests)