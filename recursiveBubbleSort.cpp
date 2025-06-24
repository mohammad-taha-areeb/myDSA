#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void bubbleSort(vector<int> &arr, int n)
{
    if( n<=1) return;
    
    
    for(int i=0;i<=n-2;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            
        }
    }
    
    
    bubbleSort(arr,n-1);
}


int main()
{
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5}  ;
    
    for(auto i:arr)
    {
        cout<<i<<"\t";
    }
    
    bubbleSort(arr,7);
    cout<<endl;

    for(auto i:arr)
    {
        cout<<i<<"\t";
    }
    return 0;
}