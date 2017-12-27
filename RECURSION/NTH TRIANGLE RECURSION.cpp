#include<iostream>

long triangle(int n)
{
     if(n==1)
          return 1;
     else
          return n+ triangle(n-1);
}

using namespace std;

int main()
{
     int n;
     cin>>n;
     cout<<triangle(n);
}
