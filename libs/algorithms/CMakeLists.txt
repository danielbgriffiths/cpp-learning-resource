# Make an automatic library - will be static or dynamic based on user setting
add_library(
        algorithms_lib
        reverse-array.cpp
        "${PROJECT_SOURCE_DIR}/include/algorithms/reverse-array.hpp"
)

# We need this directory, and users of our library will need it too
target_include_directories(
        algorithms_lib
        PUBLIC
        "${PROJECT_SOURCE_DIR}/include/algorithms"
)

# This depends on (header only) boost
#target_link_libraries("${ALGORITHMS_LIB}" PRIVATE Boost::boost)

# All users of this library will need at least C++11
#target_compile_features("${ALGORITHMS_LIB}" PUBLIC cxx_std_11)

# IDEs should put the headers in a nice place
source_group(
        TREE "${PROJECT_SOURCE_DIR}/include/algorithms"
        PREFIX "Algorithms Header Files"
        FILES "${PROJECT_SOURCE_DIR}/include/algorithms/reverse-array.hpp"
)
