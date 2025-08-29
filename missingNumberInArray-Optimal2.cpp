#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int missingNumber(vector<int> nums, int n)
{
    // XoR of same number = 0. 2^2 = 0
    // XoR of any number with 0 = that number itself . 0 ^2 = 2
    int xOr1 =0 , xOr2 = 0;
    
    
    // for(int i=1;i<=n;i++)
    // {
    //     xOr1 = xOr1 ^ i;
    // }
    // for(int i=0;i<n;i++)
    // {
    //     xOr2 = xOr2 ^ nums[i];
    // }
    
    // We optimize it more by using only one loop
    
    // iterating till size -1
    for(int i=0;i<n-1;i++)
    {
         xOr2 = xOr2 ^ nums[i];
         
         xOr1 = xOr1 ^ (i+1);
    }
    // last element left from the above iteration
    xOr1 = xOr1 ^ n;
    
    return (xOr1 ^ xOr2);
}

int main()
{
    vector<int> nums = {1,2,4,5};
    cout<<missingNumber(nums,5);
    return 0;
}