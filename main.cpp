#include <iostream>
#include "sorting_algos.h"
#include "sorting_algo.cpp"
#include <vector>
int main(){
    std::vector<int> at{3,2,1,5};
    std::vector<char> at_char{'a','c','d','b','a'};
    Sorting<int> Obj(at);
    Sorting<char> Obj_char(at_char);
    Obj.bubble_sort(at);
    Obj_char.bubble_sort(at_char);
    // Obj.display();
}