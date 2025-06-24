#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void insertionSort(vector<int> &arr,int i, int n)
{
    if(i>=n) return;
    
    int j=i;
    
    while(j>0 && arr[j-1]>arr[j])
    {
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
        
        j--;
    }
    
    insertionSort(arr,i+1,n);
    
}


int main()
{
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5}  ;
    
    for(auto i:arr)
    {
        cout<<i<<"\t";
    }
    
    insertionSort(arr,0,7);
    cout<<endl;

    for(auto i:arr)
    {
        cout<<i<<"\t";
    }
    return 0;
}
