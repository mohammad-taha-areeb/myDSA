#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> union_arr(vector<int> arr1, int n,vector<int> arr2, int m)
{
    set<int> st;
    
    for(int i=0;i<n;i++)
    {
        st.insert(arr1[i]);
    }
    for(int i=0;i<m;i++)
    {
        st.insert(arr2[i]);
    }
    
    vector<int> un;
    
    // for(int i=0;i<un.size();i++)
    // {
    //     un.push_back(un[i]);
    // }
    
    for(auto j:st)
    {
        un.push_back(j);
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