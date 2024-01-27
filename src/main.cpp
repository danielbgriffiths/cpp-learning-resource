#include <iostream>
#include <reverse-array.hpp>
#include <sum-of-sub-arrays.hpp>

int main() {
    std::vector<int> test = {1, 2, 3};
    std::vector<int> result = reverse_array_memory(test);
    std::cout << "Hello, World! Check our the reversed array:" << std::endl;
    for(int i : result)
        std::cout << "idx = " << i << std::endl;

    std::vector<int> test2 = {1, 2, 3};
    int result2 = sum_of_sub_arrays(test);
    std::cout << "sum = " << result2 << std::endl;
    return 0;
}
