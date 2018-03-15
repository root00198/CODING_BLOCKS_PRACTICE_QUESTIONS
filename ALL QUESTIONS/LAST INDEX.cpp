#include<bits/stdc++.h>

using namespace std;

int lastIndx(int arr[],int repo,int num)
{
     if(repo==-1)
          return -1;
     if(arr[repo]==num)
          return repo;
     return lastIndx(arr,repo-1,num);
}
int main()
{
     int n;
     cin>>n;

     int a[n],i;
     for(i=0;i<n;i++)
          cin>>a[i];
     cin>>i;

     cout<<lastIndx(a,n-1,i);
}
