#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int numberComesOne(vector<int> nums , int n)
{
     //Run a loop for selecting elements:
    for(int i=0;i<n;i++)
    {
        int flag = 0;
        int temp = nums[i];

        //find the occurrence using linear search:
        for(int j=0;j<n;j++)
        {
            if(nums[j]==temp)
            {
                flag++;
            }
        }
        if(flag == 1)
        {
            return nums[i];
        }
    }
    return -1;
}


int main()
{
    
    vector<int> nums = {1,1,2,2,3,4,4};
    
    
    
    cout<<numberComesOne(nums,7);

    return 0;
}