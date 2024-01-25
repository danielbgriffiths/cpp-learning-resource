#include <iostream>
#include <reverse-array.hpp>

int main() {
    std::vector<int> test = {1, 2, 3};
    std::vector<int> result = reverse_array_memory(test);
    std::cout << "Hello, World! Check our the reversed array:" << std::endl;
    for(int i : result)
        std::cout << "idx = " << i << std::endl;
    return 0;
}
