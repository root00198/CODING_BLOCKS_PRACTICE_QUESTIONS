#include<iostream>
#include<vector>

using namespace std;

int n,m;

int check(int i,long a[])
{
     if(i==n)
          return -1;
     else if(a[i]==m)
          return 1;
     else return check(i+1,a);
}

int main()
{
     cin>>n;
     int i;

     long a[n];

     for(i=0;i<n;i++)
          cin>>a[i];
     cin>>m;

     int flag=check(0,a);
     if(flag==1)
          cout<<"true";
     else
          cout<<"false";
}
