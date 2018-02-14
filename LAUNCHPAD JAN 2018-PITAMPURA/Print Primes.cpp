#include<iostream>
#include<math.h>

using namespace std;

int isprime(int n)
{
     bool flag=true;

     for(long i=2;i<=sqrt(n);i++)
     {
          if(n%i==0)
          {
               flag=false;
               break;
          }
     }
     if(flag)
          return 1;
     else
          return 0;
}

int main()
{
     int n;
     cin>>n;

     int i=2;
     for(i=2;i<=n;i++)
     {
          if(isprime(i)==1)
               cout<<i<<"\n";
     }
}
