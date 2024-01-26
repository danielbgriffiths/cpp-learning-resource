#include <gtest/gtest.h>
#include "reverse-array.hpp"
#include <vector>


TEST(ReverseArrayTestSuite, StatusCheck) {
    std::vector<int> value = {1, 2, 3};
    std::vector<int> expected = {3, 2, 1};
    std::vector<int> result = reverse_array_memory(value);
    EXPECT_EQ(result, expected);
}

