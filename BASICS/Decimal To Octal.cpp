#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n;
     cin>>n;

     int a[n];
     int i=0;

     while(n>0)
     {
          a[i]=n%8;
          i++;
          n/=8;
     }
     for(n=i-1;n>=0;n--)
          cout<<a[n];
}
