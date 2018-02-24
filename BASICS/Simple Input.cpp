#include<iostream>

using namespace std;

int main()
{
     int t;
     long sum=0;

     while(sum>=0)
     {
          cin>>t;
          sum+=t;
          if(sum>=0)
               cout<<t<<"\n";
     }
     cin>>t;
}
