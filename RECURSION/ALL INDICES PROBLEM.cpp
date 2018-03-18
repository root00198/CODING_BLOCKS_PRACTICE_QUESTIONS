#include<bits/stdc++.h>

using namespace std;

void AllIndices(int arr[],int repo,int out[],int &outpos,int num)
{
     if(repo==-1)
          return;
     if(arr[repo]==num)
          out[outpos++]=repo;
     AllIndices(arr,repo-1,out,outpos,num);
}
int main()
{
     int n;
     cin>>n;

     int a[n],i;
     for(i=0;i<n;i++)
          cin>>a[i];
     int out[1000],outpos=0;
     int num;
     cin>>num;
     AllIndices(a,n-1,out,outpos,num);
     for(i=outpos-1;i>=0;i--)
          cout<<out[i]<<" ";
}
