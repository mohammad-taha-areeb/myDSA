#include <iostream>
#include<bits/stdc++.h>

using namespace std;

// T.C -> O(n)
// S.C -> O(1)

int missingNumber(vector<int> nums, int n)
{

    int sumOfNaturalNo = (n*(n+1))/2;
    int sumOfArray=0;
    for(auto i:nums)
    {
        sumOfArray += i;
    }
    return sumOfNaturalNo-sumOfArray;
}

int main()
{
    vector<int> nums = {1,2,3,5};
    cout<<missingNumber(nums,5);
    return 0;
}