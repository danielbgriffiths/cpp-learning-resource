set(DOXYGEN_EXTRACT_ALL YES)
set(DOXYGEN_BUILTIN_STL_SUPPORT YES)

doxygen_add_docs(
        docs algorithms/reverse-array/reverse-array.hpp
        "${CMAKE_CURRENT_SOURCE_DIR}/cpp-learning-resource.md"
        WORKING_DIRECTORY
        "${PROJECT_SOURCE_DIR}/include"
)
