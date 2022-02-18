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
    
}