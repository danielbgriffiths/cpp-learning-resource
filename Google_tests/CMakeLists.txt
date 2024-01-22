project(GoogleTests)
add_subdirectory(libs)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})


add_executable(GoogleTestsExec reverse-array.test.cpp)

target_link_libraries(GoogleTestsExec libs-algorithms)

target_link_libraries(GoogleTestsExec gtest gtest_main)