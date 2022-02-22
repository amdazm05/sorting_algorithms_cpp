// This library is meant to be used as a template, to use the sorting algorithms on different data types
// A Project of Aloha Oe 
//This library only works with 1 Dimensional arrays
#ifndef sorting_algo
#define sorting_algo
#include <vector>
typedef int iter;

template <typename type>
//Class defintion
class Sorting
{
    public:
    Sorting();
    Sorting(std::vector<type> &Vec);
    //copy constructor to copy some objects
    Sorting(Sorting &copy);
    //Sorts using bubble sort 
    void bubble_sort(std::vector<type> &Vec);
    //Sorts using Binary Sort 
    void selection_sort(std::vector<type> &Vec);
    //Displays the vector
    void display();

    private:
    std::vector<type> Vec;
    iter get_minimum_element(std::vector<type> &Vec);
    iter get_maximum_element(std::vector<type> &Vec);
};

#endif