#include<bits/stdc++.h>

using namespace std;

bool check(int arr[],int n)
{
     if(n<=1)
          return true;
     if(arr[n-1]>=arr[n-2]&&check(arr,n-1))
          return true;
     return false;
}

int main()
{
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
          cin>>a[i];
     if(check(a,n))
          cout<<"true";
     else
          cout<<"false";
}
