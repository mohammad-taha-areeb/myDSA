#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Factors
vector<int> factors(int n)
{
  vector<int> lt;
  for(int i=1;i*i <=n;i++)
    {
      if(n%i==0)
      {
        lt.push_back(i);
        if(n/i != i)
        {
          lt.push_back(n/i);
        }
      }
    }
  sort(lt.begin(),lt.end());
  return lt;
}


//Is Prime
bool isPrime(int n)
{
  int cnt = 0;
  for(int i=0;i*i<=n;i++)
    {
      if(n%i==0)
      {
        cnt++;
        if(n/i != i)
        {
          cnt++;
        }
      }
    }
  if(cnt>2)return false;
  return true;
}

//Find GCD/HCF
int GCD(int a,int b)
{
  while(a>0 && b>0)
    {
      if(a>b)
      {
        a = a%b;
      }
      else{
        b = b%a;
      }
    }
  if(a==0)return b;
  else return a;
    
}


void printName(int i,int n){
  if(n>i){
    return;
  }
  cout<<i<<endl;
  printName(i-1,n);
}

void sum(int i,int n){
  if(i>n) {
    return;
  }
  cout<<i;
  sum(i+1,n);


}


void printNto1usingBt(int i, int n)
{
  if(i>n)return;

    printNto1usingBt(i+1,n);
   cout<<i<<endl;
}

void fact1(int i, int n)
{
  if(i==1)
  {cout<< n;
  return ;}
  fact1(i-1,i*n);
}

void rev(int arr[],int i,int n)
{
  if(i >=n/2)return ;
  swap(arr[i] ,arr[n-i-1]);
  rev(arr,i+1,n);
}

int main() {

  // for (int factor : factors(12)) {
  //   cout << factor << " ";
  // }

  // cout<<"\n";

  // cout<<isPrime(7);

  // cout<<"\n";

  // cout<<GCD(12,24);

  // printName(5,1);

  // sum(1,5);
  
  // printNto1usingBt(1,5);

  // fact1(5,1);

  int a[3] ={1,2,3};
  for(auto i:a)
    {
      cout<<i<<"\t";
    }

  rev(a,0,3);

  cout<<endl;
  for(auto i:a)
    {
      cout<<i<<"\t";
    }
}
