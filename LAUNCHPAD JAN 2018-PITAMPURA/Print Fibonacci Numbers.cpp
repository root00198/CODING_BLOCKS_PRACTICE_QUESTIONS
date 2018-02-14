#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n;
     cin>>n;
     int a,b,c;

     a=0;
     b=1;
     cout<<"0\n1\n";

     while(b<=n)
     {
          c=a+b;
          a=b;
          b=c;
          if(b<=n)
               cout<<b<<"\n";
          else
               break;
     }
}
