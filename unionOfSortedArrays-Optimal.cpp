#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> union_arr(vector<int> arr1, int n,vector<int> arr2, int m)
{
    int i=0;
    int j=0;
    
    vector<int> un;
    
    while(i<n && j<m)
    {
        if(arr1[i]<=arr2[j])
        {
            //back to check last inserted value in vector
            if(un.size() ==0 || un.back() != arr1[i])
            {
                un.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if(un.size()==0 || un.back() != arr2[j])
            {
                un.push_back(arr2[j]);
            }
            
            j++;
        }
    }
    
    while(i<n)
    {
        if(un.size() ==0 || un.back() != arr1[i])
            {
                un.push_back(arr1[i]);
            }
        i++;
    }
    
    while(j<m)
    {
        if(un.size()==0 || un.back() != arr2[j])
            {
                un.push_back(arr2[j]);
            }
            
        j++;
    }
    
    return un;
}


int main()
{
    
    vector<int> arr1 = {1,1,2,3,4,5};
    vector<int> arr2 = {2,3,4,4,5,6};
    
    vector<int> un = union_arr(arr1,6,arr2,6);
    
    for(auto i :un)
    {
        cout<<i<<"\t";
    }
    
    return 0;
}