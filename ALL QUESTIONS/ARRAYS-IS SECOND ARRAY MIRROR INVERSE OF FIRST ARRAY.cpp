#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n;
     cin>>n;
     int a[n],i,b[n];

     for(i=0;i<n;i++)
          cin>>a[i];

     for(i=0;i<n;i++)
     {
          b[a[i]]=i;
     }
     int c[n];
     for(i=0;i<n;i++)
          cin>>c[i];
     for(i=0;i<n;i++)
     {
          if(b[i]!=c[i])
               break;
     }
     if(i==n)
          cout<<"true";
     else
          cout<<"false";
}
