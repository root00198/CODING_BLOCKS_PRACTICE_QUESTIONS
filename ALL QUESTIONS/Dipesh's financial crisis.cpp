#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          long int a,b;
          cin>>a>>b;
          long int cost;
          cin>>cost;

          cout<<((a-1)+(b-1))*cost<<"\n";
     }
}
