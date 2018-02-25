#include<bits/stdc++.h>

using namespace std;

long check(int n)
{
     long int x=0,r=0;
     while(n>0)
     {
          int a=n%10;
          n/=10;
          x++;
          a--;
          if(a!=4)
               r+=(pow(10,a)*x);
          else
               r+=10000*x;
     }
     return r;
}

int main()
{
     long int n;
     cin>>n;

     cout<<check(n);
}

