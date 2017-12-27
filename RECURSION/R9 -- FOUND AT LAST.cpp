#include<iostream>

using namespace std;

int n,m;

int check(int i,long a[])
{
     if(i==-1)
          return -1;
     else if(a[i]==m)
          return i;
     else return check(i-1,a);
}

int main()
{
     int i;
     cin>>n;

     long a[n];

     for(i=0;i<n;i++)
          cin>>a[i];
     cin>>m;

     cout<<check(n-1,a);
}
