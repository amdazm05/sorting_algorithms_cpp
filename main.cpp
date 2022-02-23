// Example of using the library
#include <iostream>
#include "sorting_algos.h"
#include "sorting_algo.cpp"
#include <vector>
int main(){
    std::vector<int> at{3,2,31,1,2333,2,5,545};
    std::vector<char> at_char{'a','c','d','b','a'};
    Sorting<int> Obj(at);
    Sorting<char> Obj_char(at_char);
    Obj.selection_sort(at);
    Obj.bubble_sort(at);
    Obj_char.selection_sort(at_char);
    return 0;
}