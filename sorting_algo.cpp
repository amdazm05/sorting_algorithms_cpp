#include "sorting_algos.h"
#include <iostream>
// template <typename type>
template <class type>
Sorting<type>::Sorting()
{
    std::cout<<"Sorting Object initialised"<<std::endl;
}
template <typename type>
Sorting<type>::Sorting( std::vector<type> &Vec)
{
    this->Vec = Vec;
}
template <typename type>
void Sorting<type>::bubble_sort( std::vector<type> &Vec)
{
    for (auto it = begin (Vec); it != end (Vec); ++it) 
    {
        // The std::vector::data() is an STL in C++ which returns a direct pointer to the memory array used internally by the vector to store its owned elements
        // it->at(1); //to test 
    }
}