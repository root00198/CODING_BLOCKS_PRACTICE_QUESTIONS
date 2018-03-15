#include<bits/stdc++.h>

using namespace std;

int main()
{
     long n1,n2,x=2,ans=1;
     cin>>n1>>n2;

     while(x<max(n1,n2))
     {
          if(n1%x==0&&n2%x==0)
          {
               ans*=x;
               n1/=x;
               n2/=x;
          }
          else
               x++;
     }
     ans*=n1*n2;
     cout<<ans;
}
