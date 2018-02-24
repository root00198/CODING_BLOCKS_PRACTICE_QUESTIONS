#include<bits/stdc++.h>

using namespace std;

int isprime(long n)
{
     for(int i=2;i<=sqrt(n);i++)
     {
          if(n%i==0)
               return 0;
     }
     return 1;
}

int main()
{
     long n=3;
     int a;
     cin>>a;

     cout<<"2";
     while(n<=a)
     {
          if(isprime(n)==1)
               cout<<", "<<n;
          n+=2;
     }
}
