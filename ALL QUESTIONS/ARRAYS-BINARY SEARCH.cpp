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
     if(binary_search(a,a+n,t))
          cout<<lower_bound(a,a+n,t)-a;
     else
          cout<<"-1";
}
