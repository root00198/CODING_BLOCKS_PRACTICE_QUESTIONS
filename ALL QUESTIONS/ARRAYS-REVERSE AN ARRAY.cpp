#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     int a[t];

     int i=0;
     for(;i<t;i++)
          cin>>a[i];
     for(i=t-1;i>=0;i--)
          cout<<a[i]<<"\n";
}
