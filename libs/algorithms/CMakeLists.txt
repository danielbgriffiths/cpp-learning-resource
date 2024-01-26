# Create a Library. It Will be Static or Dynamic Base on User Settings
add_library(
        algorithms_lib
        reverse-array.cpp
        sum-of-sub-arrays.cpp
        "${PROJECT_SOURCE_DIR}/include/algorithms/reverse-array.hpp"
        "${PROJECT_SOURCE_DIR}/include/algorithms/sum-of-sub-arrays.hpp"
)

# Link to /include Directory Used by Target Library
target_include_directories(
        algorithms_lib
        PUBLIC
        "${PROJECT_SOURCE_DIR}/include/algorithms"
)

# This depends on (header only) boost
#target_link_libraries("${ALGORITHMS_LIB}" PRIVATE Boost::boost)

# IDEs should put the headers in a nice place
source_group(
        TREE "${PROJECT_SOURCE_DIR}/include/algorithms"
        PREFIX "Algorithms Header Files"
        FILES
        "${PROJECT_SOURCE_DIR}/include/algorithms/reverse-array.hpp"
        "${PROJECT_SOURCE_DIR}/include/algorithms/sum-of-sub-arrays.hpp"
)
