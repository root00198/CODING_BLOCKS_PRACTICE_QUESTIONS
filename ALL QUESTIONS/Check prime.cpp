#include<iostream>
#include<math.h>
using namespace std;

int main()
{
     long n;
     cin>>n;

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
          cout<<"Prime";
     else
          cout<<"Not Prime";
}
