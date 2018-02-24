#include<iostream>

using namespace std;

int main()
{
     long n,count=0;
     int digit;

     cin>>n>>digit;

     while(n>0)
     {
          if(n%10==digit)
               count++;
          n/=10;
     }
     cout<<count;
}
