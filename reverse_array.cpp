//
//  reverse_array.cpp
//  cpp-algoriths-datastructures
//
//  Created by Daniel Griffiths on 1/18/24.
//

#include "reverse_array.hpp"
#include <vector>
#include <iostream>

/*
 * Create function that reverses an array
 * Parameter Choice: vector (variable length)
 * Method: create new array in memory
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */
std::vector<int> execute(std::vector<int> list) {
    std::vector<int> next_list;
    
    double length = sizeof(list) / sizeof(int);
    
    for (int i = 0; i < length; i++) {
        int reflected_index = length - i - 1;
        next_list.push_back(list[reflected_index]);
    }
        
    return next_list;
};
