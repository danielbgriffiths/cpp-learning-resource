#include "sum-of-sub-arrays.hpp"
#include <vector>

int sum_of_sub_arrays(std::vector<int> list) {
    int result = 0;

    int size = list.size();

    // computing sum of subarray using formula
    for (int i = 0; i < size; i++)
        result += (list[i] * (i + 1) * (size - i));

    // return all subarray sum
    return result;
};