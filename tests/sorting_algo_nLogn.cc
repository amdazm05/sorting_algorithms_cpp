#include <iostream>
#include <vector>


void merge(std::vector<int> &arr,int left,int mid,int right)
{
    int left_subarr_n  = (mid+1) - left;
    int right_subarr_n = right - mid;

    std::vector<int> left_subarr(left_subarr_n);
    std::vector<int> right_subarr(right_subarr_n);

    int it =0;
    for(int i = left ;i<=mid;i++)
        left_subarr[it++] = arr[i];
    it = 0;
    for(int i = mid+1;i<=right;i++)
        right_subarr[it++] = arr[i];


    int index_merged_array = left;
    int index_left_array = 0;
    int index_right_array = 0;

    while(  index_left_array<left_subarr_n && 
            index_right_array<right_subarr_n)
    {   
        if(left_subarr[index_left_array]<=right_subarr[index_right_array])
        {
            arr[index_merged_array] = left_subarr[index_left_array++];
        }
        else
        {
            arr[index_merged_array] = right_subarr[index_right_array++];
        }
        index_merged_array++;
    }

    while(index_left_array<left_subarr_n)
    {
        arr[index_merged_array++] = left_subarr[index_left_array++];
    }

    while(index_right_array<right_subarr_n)
    {
        arr[index_merged_array++] = right_subarr[index_right_array++];
    }

    return;
}
void merge_sort(std::vector<int> &arr,int start ,int end)
{
    if(start>=end)  return;
    int mid = start + (end-start)/2;
    merge_sort(arr,start,mid);
    merge_sort(arr,mid+1,end);
    merge(arr,start,mid,end);
}

int main()
{
    std::vector<int> arr({1,2,3});
    // insertion_sort(arr);
    merge_sort(arr,0,arr.size()-1);
    for(auto & elem:arr)
        std::cout<<elem<<" ";
    std::cout<<std::endl<<std::endl;
    return {};
}