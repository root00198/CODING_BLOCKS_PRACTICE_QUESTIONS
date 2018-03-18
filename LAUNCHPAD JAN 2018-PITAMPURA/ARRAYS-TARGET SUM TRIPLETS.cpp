#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n;
     cin>>n;

     int a[n],i,j,k,sum;
     for(i=0;i<n;i++)
          cin>>a[i];

     sort(a,a+n);
     cin>>sum;
     for(i=0;i<n-2;i++)
     {
          for(j=i+1;j<n-1;j++)
          {
               for(k=j+1;k<n;k++)
               {
                    if(a[i]+a[j]+a[k]==sum)
                         cout<<a[i]<<", "<<a[j]<<" and "<<a[k]<<"\n";
               }
          }
     }
}
