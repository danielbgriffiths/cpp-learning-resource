# Fetch Testing Library
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
set(
        gtest_force_shared_crt
        ON CACHE BOOL
        "" FORCE
)
FetchContent_MakeAvailable(googletest)

# Add Tests As Executable
add_executable(
        unit_test_exec
        reverse-array.test.cpp
        sum-of-sub-arrays.test.cpp
)

# Link Test Target Library and GoogleTest Testing Library with Unit Test Executable
target_link_libraries(
        unit_test_exec PRIVATE
        algorithms_lib
        GTest::gtest_main
)

# Include GoogleTest and Register Tests With CMake
include(GoogleTest)
gtest_discover_tests(unit_test_exec)
add_test(
        NAME unit_test_exec_test
        COMMAND unit_test_exec
)
