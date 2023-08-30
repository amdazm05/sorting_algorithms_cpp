
#include <iostream>
#include <vector>

int min(std::vector<int> &arr, int i,int j)
{
    if(i==j)    return i;
    int k = min(arr,i+1,j);
    return arr[k]<arr[i] ? k: i;
}
void recursive_selection_sort(std::vector<int> &arr,int index=0)
{
    if(index==arr.size()) return;
    int mini = min(arr,index,arr.size()-1);
    if(mini!=index) std::swap(arr[mini],arr[index]);
    recursive_selection_sort(arr,index+1);
}

void selection_sort(std::vector<int> & arr)
{
    for(int i =0;i<arr.size();i++)
    {
        int min_idx = i;
        for(int j = i+1; j<arr.size();j++)
        {
            if(arr[min_idx]>arr[j])
            {
                min_idx= j;
            }
        }
        if(min_idx!=i)
        {
            std::swap(arr[min_idx],arr[i]);
        }
    }    
}

void bubble_sort_improved(std::vector<int> &arr)
{

    bool isSorted = false;
    for(int i=0;i<arr.size();i++)
    {
        isSorted = false;
        for(int j=0;j<arr.size();j++)
        {
            if(arr[i] < arr[j])
            {
                std::swap(arr[i],arr[j]);
                isSorted = true;
            }
        }
        if(!isSorted)
            break;
    }
}


// A function to implement bubble sort
void bubbleSort(std::vector<int> &arr, int n)
{
    if (n == 1)
        return;
    for (int i=0; i<n-1; i++)
    if (arr[i] > arr[i+1])
    {
        std::swap(arr[i], arr[i+1]);
    }
    bubbleSort(arr, n-1);
}
void bubble_sort(std::vector<int> &arr)
{
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr.size();j++)
        {
            if(arr[i] < arr[j])
            {
                std::swap(arr[i],arr[j]);
            }
        }
    }
}

void insertion_sort(std::vector<int> &arr)
{
    for(int i=0;i<arr.size();i++)
    {
        int currentKey= arr[i];
        int j = i -1;
        while(j>=0 && currentKey<=arr[j])
        {
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = currentKey;
    }
}