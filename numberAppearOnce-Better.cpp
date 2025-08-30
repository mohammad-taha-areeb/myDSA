#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Using hashing
int numberComesOne(vector<int> nums , int n)
{
    int max = 0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]>max)
        {
            max = nums[i];
        }
    }
    
    map<int,int> hs ;
    
    for(int i=0;i<n;i++)
    {
        hs[nums[i]]++;
    }
    
    for(int i=0;i<n;i++)
    {
        if(hs[nums[i]]==1)
        {
            return nums[i];
        }
    }
    
    return -1;
}


int main()
{
    
    vector<int> nums = {1,1,2,3,3,4,4};
    
    cout<<numberComesOne(nums,7);

    return 0;
}