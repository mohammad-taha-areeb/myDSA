#include <iostream>
#include<bits/stdc++.h>
using namespace std;

/*  
    TC -> O(n * m)
    SC -> O(m)
*/

vector<int> IntersectionOfArrays(vector<int> arr1,int n, vector<int> arr2, int m)
{
    int isVisited[m] = {0};
    vector<int> ans;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr1[i]==arr2[j] && isVisited[j]==0)
            {
                ans.push_back(arr1[i]);
                isVisited[j]=1;
                break;
            }
            if(arr1[i]<arr2[j]) break;
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