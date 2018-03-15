#include<bits/stdc++.h>

using namespace std;

int search(int arr[],int n,int m)
{
     if(n==0)
          return -1;
     if(arr[n-1]==m)
          return n-1;
     return search(arr,n-1,m);
}

int main()
{
     int n;
     cin>>n;

     int a[n],i;
     for(i=0;i<n;i++)
          cin>>a[i];
     cin>>i;
     cout<<search(a,n,i);
}
