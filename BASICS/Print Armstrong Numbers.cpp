#include<bits/stdc++.h>

using namespace std;

bool check(long n)
{
     long qwerty=n,ans=0;
     while(n>0)
     {
          int digit = n%10;
          ans+=pow(digit,3);
          n/=10;
     }
     if(qwerty==ans)
          return true;
     return false;
}

int main()
{
     int n1,n2;
     cin>>n1>>n2;

     while(n1<=n2)
     {
          if(check(n1))
               cout<<n1<<"\n";
          n1++;
     }
}
