#include<bits/stdc++.h>

using namespace std;

bool check(int arr[],int n,int m)
{
     if(n==0)
          return false;
     if(arr[n-1]==m)
          return true;
     return check(arr,n-1,m);
}

int main()
{
     int n,i;
     cin>>n;

     int a[n];
     for(i=0;i<n;i++)
          cin>>a[i];
     cin>>i;

     if(check(a,n,i))
          cout<<"true";
     else
          cout<<"false";
}
