#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &a,int low , int mid, int high)
{
    vector<int> temp;
    
    int left = low;
    int right = mid+1;
    
    while(left<=mid && right<=high)
    {
        if(a[left]<=a[right])
        {
            temp.push_back(a[left++]);
        }
        else
        {
            temp.push_back(a[right++]);
        }
    }
    
    while(right<=high){
        temp.push_back(a[right++]);
    }
    while(left<=mid){
        temp.push_back(a[left++]);
    }
    
    for(int i=low;i<=high;i++)
    {
        a[i] = temp[i-low];
    }
}

void mergeSort(vector<int> &a,int low ,int high){
    if(low>=high) return;
    
    int mid = (low+high)/2;
    
    mergeSort(a,low,mid);
    mergeSort(a,mid+1,high);
    merge(a,low,mid,high);
}


int main()
{
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5}  ;
    
    for(auto i:arr)
    {
        cout<<i<<"\t";
    }
    
    mergeSort(arr,0,6);
    cout<<endl;

    for(auto i:arr)
    {
        cout<<i<<"\t";
    }
    return 0;
}