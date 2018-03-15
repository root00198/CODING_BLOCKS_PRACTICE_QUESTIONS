#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long n,ans=0;
     cin>>n;

     while(n>0)
     {
          int x=n%10;
          ans*=10;
          ans+=x;
          n/=10;
     }
     cout<<ans;
}
