#include "reverse-array.hpp"
#include <vector>

/*
 * Create function that reverses an array
 * Parameter Choice: vector (variable length)
 * Method: create new array in memory
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */
std::vector<int> execute(std::vector<int> list) {
    std::vector<int> next_list;
    
    int list_length = static_cast<int>(list.size());
    
    for (int i = 0; i < list_length; i++) {
        int reflected_index = list_length - i - 1;
        next_list.push_back(list[reflected_index]);
    }
        
    return next_list;
};
