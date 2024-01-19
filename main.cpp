//
//  main.cpp
//  cpp-algoriths-datastructures
//
//  Created by Daniel Griffiths on 1/18/24.
//

#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include "reverse_array.hpp"

int main(int argc, const char * argv[]) {
    std::vector<int> array_to_reverse = {1, 2, 3, 4, 5};
    std::vector<int> reversed_array = execute(array_to_reverse);
    return 0;
}
