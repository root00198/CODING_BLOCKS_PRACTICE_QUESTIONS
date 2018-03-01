#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n;
     cin>>n;

     while(n--)
     {
          long t;
          cin>>t;

          int odd=0,even=0;

          while(t>0)
          {
               int digit = t%10;
               if(digit%2==0)
                    even+=digit;
               else
                    odd+=digit;
               t/=10;
          }
     if(even%4==0)
          cout<<"Yes\n";
     else if(odd%3==0)
          cout<<"Yes\n";
     else
          cout<<"No\n";
     }
}
