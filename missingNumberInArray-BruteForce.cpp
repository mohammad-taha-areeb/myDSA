#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int missingNumber(vector<int> nums, int n)
{
    // from 1 to 5 check each number if exist or not
    
    for(int i=1;i<=n;i++)
    {
        int flag = 0 ;
        
        for(int j=0;j<n;j++)
        {
            if(nums[j]==i)
            { 
                // if the particular number is present in the array mark flag as 1 other it will be 0
                flag = 1;
                break;
            }
        }
        if(flag==0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {1,2,4,5};
    cout<<missingNumber(nums,5);
    return 0;
}