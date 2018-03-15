
#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          long n;
          cin>>n;

          int a[n],i=0;

          while(n>0)
          {
               a[i]=n%2;
               i++;
               n/=2;
          }
          for(i-1;i>=0;i--)
          {
               if(a[i]==1)
                    n++;
          }
          cout<<n<<"\n";
     }
}
