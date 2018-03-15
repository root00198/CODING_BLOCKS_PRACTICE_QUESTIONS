#include<bits/stdc++.h>

using namespace std;

int main()
{
     long n;
     cin>>n;

     int a[n/2+1],i=0;

     while(n>0)
     {
          a[i]=n%8;
          n/=8;
          i++;
     }
     for(--i;i>=0;i--)
          cout<<a[i];
}
