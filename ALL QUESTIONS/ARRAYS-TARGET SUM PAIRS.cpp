#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n;
     cin>>n;

     int a[n];
     int i,j,sum;

     for(i=0;i<n;i++)
          cin>>a[i];

     int ans[n];
     int z=0;
     sort(a,a+n);
     cin>>sum;
     for(i=0;i<n-1;i++)
     {
          for(j=1;j<n;j++)
          {
               if(a[i]+a[j]==sum&&i!=j)
               {
                    int k;
                    for(k=0;k<z;k++)
                    {
                         if(a[i]==ans[k]||a[j]==ans[k])
                              break;
                    }
                    if(k==z)
                    {
                         ans[z]=a[i];
                         z++;
                         cout<<a[i]<<" and "<<a[j]<<"\n";
                    }
               }
          }
     }
}
