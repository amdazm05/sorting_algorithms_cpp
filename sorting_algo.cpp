#include "sorting_algos.h"
#include <iostream>
typedef int iter;
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
    iter i=0;
    iter j=0;
    iter temp;
    for (auto it = begin (Vec); it != end (Vec); ++it) 
    {
        // The std::vector::data() is an STL in C++ which returns a direct pointer to the memory array used internally by the vector to store its owned elements
        // it->at(1); //to test 
            for(int j=0;j<Vec.size();j++)
            {   
                if(j-1>=0)
                {
                    if(Vec.at(j)<Vec.at(j-1))
                    {
                        temp=Vec.at(j-1);
                        Vec.at(j-1)=Vec.at(j);
                        Vec.at(j)=temp;
                    }
                }                   
            }
        i++;            
    }
    for(int i=0;i<Vec.size();i++)
        std::cout<<Vec.at(i);
    std::cout<<std::endl;
}
//TODO add a function for Binary sort
template <typename type>
void Sorting<type>::display()
{
    iter i=0;
    for(auto it=begin(this->Vec);it!=end(this->Vec);++it)
        std::cout<<this->Vec.at(i++)<<" ";
    std::cout<<std::endl;
}

template<typename type>
void Sorting<type>::binary_sort(std::vector<type> &Vec)
{   
    iter j=0;
    for(auto it=begin(Vec);it!=end(Vec);++it)
    {
        
    }
}