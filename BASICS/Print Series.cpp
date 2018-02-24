#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n1,n2,i=1;
     cin>>n1>>n2;

     while(n1>0)
     {
          int x=(3*i)+2;
          i++;
          if(x%n2!=0)
          {
               n1--;
               cout<<x<<"\n";
          }
     }
}
