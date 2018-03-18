#include<bits/stdc++.h>

using namespace std;

void display(int n)
{
     if(n==0)
          return;
     if(n%2==1)
          cout<<n<<"\n";
     display(n-1);
     if(n%2==0)
          cout<<n<<"\n";
}
int main()
{
     int n;
     cin>>n;

     display(n);
}
