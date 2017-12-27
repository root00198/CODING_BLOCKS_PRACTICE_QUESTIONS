#include<iostream>

using namespace std;

int n,m;

int check(int i,long a[])
{
     if(i==n)
          return -1;
     else if(a[i]==m)
          return i;
     else
          return check(i+1,a);
}
int main()
{
     cin>>n;

     long a[n];
     int i;

     for(i=0;i<n;i++)
          cin>>a[i];
     cin>>m;

     cout<<check(0,a);
}
