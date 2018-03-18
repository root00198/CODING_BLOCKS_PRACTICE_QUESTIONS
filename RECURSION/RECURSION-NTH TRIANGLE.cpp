#include<bits/stdc++.h>

using namespace std;

int tNum(int n)
{
     if(n==0)
          return 0;
     return n + tNum(n-1);
}

int main()
{
     int n;
     cin>>n;

     cout<<tNum(n);
}
