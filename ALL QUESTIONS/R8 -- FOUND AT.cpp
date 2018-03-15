#include<bits/stdc++.h>

using namespace std;

int searchindex(int arr[],int n,int s,int m)
{
     if(s==n)
          return -1;
     if(arr[s]==m)
          return s;
     return searchindex(arr,n,s+1,m);
}
int main()
{
     int n;
     cin>>n;
     int a[n],i;
     for(i=0;i<n;i++)
          cin>>a[i];
     cin>>i;

     cout<<searchindex(a,n,0,i);
}
