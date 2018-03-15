#include<bits/stdc++.h>

using namespace std;

void ArrayReverse(int arr[],int s,int e)
{
     if(s>=e)
          return;
     swap(arr[s],arr[e]);
     ArrayReverse(arr,s+1,e-1);
}
int main()
{
     int n;
     cin>>n;

     int a[n],i;
     for(i=0;i<n;i++)
          cin>>a[i];
     ArrayReverse(a,0,n-1);
     for(i=0;i<n;i++)
          cout<<a[i]<<" ";
}
