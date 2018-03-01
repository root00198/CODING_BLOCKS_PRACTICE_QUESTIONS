#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n;
     cin>>n;

     int a[n],i;

     for(i=0;i<n;i++)
          cin>>a[i];

     int max=0,j,sum=INT_MIN;

     for(i=0;i<n-1;i++)
     {
          sum=a[i];
          for(j=i+1;j<n;j++)
          {
               sum+=a[j];
               if(sum>max)
               {
                    //cout<<i<<" "<<j<<" "<<sum<<" "<<max<<"\n";
                    max=sum;
               }
          }
     }
     if(a[i]<max)
          cout<<max;
     else
          cout<<a[i];
}
