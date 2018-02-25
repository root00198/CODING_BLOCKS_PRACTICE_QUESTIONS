#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n;
     cin>>n;

     int a[n],b[n];

     int i;
     for(i=0;i<n;i++)
          cin>>a[i];
     for(i=0;i<n;i++)
          cin>>b[i];

     sort(a,a+n);
     sort(b,b+n);

     i=0;
     int j=0,z=0;
     int ans[n];
     while(i<n&&j<n)
     {
          if(a[i]<b[j])
               i++;
          else if(a[i]>b[j])
               j++;
          else
          {
               //cout<<"found "<<a[i]<<" "<<b[i]<<" "<<z<<"\n";
               ans[z]=a[i];
               i++;
               j++;
               z++;
          }
     }
     cout<<"[";
     for(i=0;i<z;i++)
     {
          cout<<ans[i];
          if(i!=z-1)
               cout<<", ";
     }
     cout<<"]";
}
