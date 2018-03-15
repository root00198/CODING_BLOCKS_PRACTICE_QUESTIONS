#include<bits/stdc++.h>

using namespace std;

int main()
{
     long a=0,b=1,c;
     long count=1,n;

     cin>>n;
     if(n>1)
     {
          while(count<n)
          {
               c=a+b;
               a=b;
               b=c;
               count++;
          }
          cout<<b;
     }else if(n==1)
     cout<<"1";
}
