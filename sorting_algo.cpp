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
    iter i=0;
    iter j=0;
    iter temp;
    std::cout<<"Maximum is "<<get_maximum_element(Vec,1,(Vec.size()-1))<<std::endl;
    for (auto it = begin (Vec); it != end (Vec); ++it) 
    {
        // The std::vector::data() is an STL in C++ which returns a direct pointer to the memory array used internally by the vector to store its owned elements
        // it->at(1); //to test 
            for(iter j=0;j<Vec.size();j++)
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
    //Storing the vector into the object
    this->Vec = Vec;
    for(int i=0;i<Vec.size();i++)
        std::cout<<Vec.at(i);
    std::cout<<std::endl;
}

template<typename type>
void Sorting<type>::selection_sort(std::vector<type> &Vec)
{   
    iter j=0;

    for(auto it=begin(Vec);it!=end(Vec);++it)
    {
        
    }
}

template <typename type>
void Sorting<type>::display()
{
    iter i=0;
    for(auto it=begin(this->Vec);it!=end(this->Vec);++it)
        std::cout<<this->Vec.at(i++)<<" ";
    std::cout<<std::endl;
}

template <typename type>
iter Sorting<type>::get_minimum_element(std::vector<type> &Vec, iter start_index,iter end_index)
{
    iter i=0;
    iter minima_index=0;
    for(auto it=begin(Vec);it!=end(Vec);++it)
    {
        if(i-1>=0)
        {
            minima_index= Vec[i]<Vec[i-1]? i:minima_index;
            std::cout<<"minimum"<<minima_index<<std::endl;
        }
        i++;
    }
    return minima_index;
}

template <typename type>
iter Sorting<type>::get_maximum_element(std::vector<type> &Vec ,iter start_index,iter end_index)
{
    iter i=start_index;
    iter maxima_index=start_index;
    for(auto it=begin(Vec);it!=end(Vec);++it)
    {
        if(i-1>=0)
        {
            maxima_index= Vec[i]>Vec[i-1]? i:maxima_index;
        }
        if(i==end_index)
        {
            break;
        }
        i++;
    }
    std::cout<<"Maximum"<<maxima_index<<std::endl;
    return maxima_index;
}