#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n,m;
     cin>>m>>n;

     int a[m][n],i,j;

     for(i=0;i<m;i++)
     {
          for(j=0;j<n;j++)
               cin>>a[i][j];
     }
     for(i=0;i<m;i++)
     {
          if(i%2==0)
          {
               for(j=0;j<n;j++)
                    cout<<a[i][j]<<", ";
          }
          else
          {
               for(j=n-1;j>=0;j--)
                    cout<<a[i][j]<<", ";
          }
     }
     cout<<"END";
}
