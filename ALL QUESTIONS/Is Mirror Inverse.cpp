#include<bits/stdc++.h>

using namespace std;

bool check(int n)
{
     long int qwerty=n;
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
     if(r==qwerty)
          return true;
     return false;
}

int main()
{
     long int n;
     cin>>n;

     if(check(n))
          cout<<"true";
     else
          cout<<"false";
}
