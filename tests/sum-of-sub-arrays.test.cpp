#include <gtest/gtest.h>
#include "sum-of-sub-arrays.hpp"

TEST(SumofSubArraysTestSuite, SimpleCheck) {
    std::vector<int> value = {1, 2, 3};
    int expected = 20;
    int result = sum_of_sub_arrays(value);
    EXPECT_EQ(result, expected);
}