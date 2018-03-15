#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n;
     cin>>n;

     int a[n];

     int i;
     for(i=0;i<n;i++)
          cin>>a[i];
     int t;
     cin>>t;
    for(i=0;i<n;i++)
    {
         if(a[i]==t)
          {
               cout<<i;
               break;
          }
    }
    if(i==n)
          cout<<"-1";
}

