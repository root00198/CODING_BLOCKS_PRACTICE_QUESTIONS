#include<iostream>

using namespace std;

int n;

int check(int i,long a[])
{
     if(i==n-1)
          return 1;
     else if(a[i]<=a[i+1])
          return check(i+1,a);
     else
          return 0;
}
int main()
{
     cin>>n;
     long a[n];
     int i,flag=0;

     for(i=0;i<n;i++)
          cin>>a[i];
     flag=check(0,a);
     if(flag==1)
          cout<<"true";
     else
          cout<<"false";
}

