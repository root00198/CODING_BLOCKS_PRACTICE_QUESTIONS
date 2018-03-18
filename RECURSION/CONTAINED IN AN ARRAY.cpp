#include<bits/stdc++.h>

using namespace std;

bool check(int arr[],int repo,int num)
{
     if(repo==-1)
          return false;
     if(arr[repo]==num)
          return true;
     return check(arr,repo-1,num);
}

int main()
{
     int n;
     cin>>n;

     int a[n],i;
     for(i=0;i<n;i++)
          cin>>a[i];
     cin>>i;
     if(check(a,n-1,i))
          cout<<"true";
     else
          cout<<"false";
}
