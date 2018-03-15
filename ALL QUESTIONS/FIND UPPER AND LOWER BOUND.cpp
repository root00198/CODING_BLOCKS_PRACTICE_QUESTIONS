#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n;
     cin>>n;

     int a[n],i;
     for(i=0;i<n;i++)
          cin>>a[i];
     int t;
     cin>>t;

     while(t--)
     {
          int e;
          cin>>e;

          for(i=0;i<n;i++)
          {
               if(a[i]==e)
                    break;
          }
          if(i!=n)
               cout<<i<<" ";
          else
          {
               cout<<"-1 -1\n";
               continue;
          }
          for(i=n-1;i>=0;i--)
          {
               if(a[i]==e)
                    break;
          }
          cout<<i<<"\n";
     }
}
