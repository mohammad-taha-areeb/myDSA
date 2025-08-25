#include <iostream>
#include<bits/stdc++.h>
using namespace std;


/*  
    TC -> O(n + m)
    SC -> O(1)
*/

vector<int> IntersectionOfArrays(vector<int> arr1,int n, vector<int> arr2, int m)
{
    vector<int> ans;
    
    int i=0;
    int j=0;
    
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            j++;
        }
        else
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    
    return ans;
}

int main()
{
    vector<int> arr1 = {1,2,2,3,3,4,5,6};
    vector<int> arr2 = {2,3,3,5,6,6,7};
    
    
    vector<int> res = IntersectionOfArrays(arr1,8,arr2,7);
    
    for(auto i:res)
    {
        cout<<i<<"\t";
    }

    return 0;
}