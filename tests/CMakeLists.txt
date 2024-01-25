# Testing library
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Tests need to be added as executables first
add_executable(unit_test_exec reverse-array.test.cpp)

# I'm using C++17 in the test
#target_compile_features(unit_test_exec PRIVATE cxx_std_17)

# Should be linked to the main library, as well as the Catch2 testing library
target_link_libraries(unit_test_exec PRIVATE algorithms_lib GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(unit_test_exec)

# If you register a test, then ctest and make test will run it.
# You can also run examples and check the output, as well.
add_test(NAME unit_test_exec_test COMMAND unit_test_exec) # Command can be a target
