#include<bits/stdc++.h>

using namespace std;

int main()
{
     long n,t,largest;
     cin>>n;
     n--;
     cin>>t;
     largest=t;

     while(n--)
     {
          cin>>t;
          if(largest<t)
               largest=t;
     }
     cout<<largest;
}
