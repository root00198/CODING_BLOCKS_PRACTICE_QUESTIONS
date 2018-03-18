#include<bits/stdc++.h>

using namespace std;

int firstIndx(int arr[],int s,int e,int num)
{
     if(s>e)
          return -1;
     if(arr[s]==num)
          return s;
     return firstIndx(arr,s+1,e,num);
}
int main()
{
     int n;
     cin>>n;

     int a[n],i;
     for(i=0;i<n;i++)
          cin>>a[i];
     cin>>i;
     cout<<firstIndx(a,0,n-1,i);
}
