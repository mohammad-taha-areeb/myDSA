#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Using XoR
int numberComesOne(vector<int> nums , int n)
{
    int XoR = 0;
    for(int i=0;i<n;i++)
    {
        XoR = XoR ^ nums[i];
    }
    
    return XoR;
}


int main()
{
    
    vector<int> nums = {1,1,2,3,3,4,4};
    
    cout<<numberComesOne(nums,7);

    return 0;
}