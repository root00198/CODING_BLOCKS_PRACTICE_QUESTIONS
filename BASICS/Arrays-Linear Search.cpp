#include<bits/stdc++.h>

using namespace std;

int search(int a[],int e,int n)
{
     int i;
     for(i=0;i<n;i++)
     {
          if(a[i]==e)
               return i;
     }
     return -1;
}

int main()
{
     int n,m;
     cin>>n;

     int a[n];

     for(m=0;m<n;m++)
          cin>>a[m];
     cin>>m;
     cout<<serch(a,m,n);
}

