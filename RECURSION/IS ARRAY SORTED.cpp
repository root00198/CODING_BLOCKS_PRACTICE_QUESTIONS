#include<bits/stdc++.h>

using namespace std;

bool isSorted(int arr[],int repo)
{
     if(repo==0)
          return true;
     if(arr[repo]<arr[repo-1])
          return false;
     return isSorted(arr,repo-1);
}

int main()
{
     int n;
     cin>>n;

     int a[n],i;
     for(i=0;i<n;i++)
          cin>>a[i];
     if(isSorted(a,n-1))
          cout<<"true";
     else
          cout<<"false";
}
