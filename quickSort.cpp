#include <iostream>
using namespace std;

int partion(int arr[],int low, int high)
{
    int pivot = arr[low];
    int i=low,j=high;
    
    while(i<j)
    {
        while(arr[i]<=pivot && i<=high-1)
        {
            i++;
        }
        while(arr[j]>pivot && j>=low+1)
        {
            j--;
        }
        
        if(i<j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    
    int temp2 = arr[low];
    arr[low] = arr[j];
    arr[j] = temp2;
    
    return j;
    
}


void quickSort(int arr[],int low, int high)
{
    if(low<high)
    {
        int pIndex = partion(arr, low, high);
        
        quickSort(arr,low,pIndex-1);
        quickSort(arr,pIndex+1,high);
    }
}


int main()
{
    
    int arr[8] = {4,6,2,5,7,9,1,3};
    
    quickSort(arr,0,7);
    
    for(auto i:arr)
    {
        cout<<i<<" ";
    }

    return 0;
}
