#include <iostream>
#include <vector>


int paritition(std::vector<int> & arr, int start, int end)
{
    int key = arr[end];
    int i   = start-1;
    for(int j = start;j<end;j++)
    {
        if(arr[j]<key)
        {
            i++;
            std::swap(arr[i],arr[j]);
        }
    }  

    std::swap(arr[i+1],arr[end]);
    return i+1;
}


void quick_sort(std::vector<int> & arr ,int start,int end)
{
    if(start<end)
    {
        int parti =  paritition(arr,start,end);
        quick_sort(arr, start,parti-1);
        quick_sort(arr,parti+1,start);
    }
    else
    {
        return;
    }


}

int main()
{
    std::vector<int> arr({1,3,2,7,1,2,3,6});
    quick_sort(arr,0,arr.size()-1);
    for(auto & e:arr)
        std::cout<<e<<" ";
    std::cout<<std::endl;

    return {};
}