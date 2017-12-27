#include<bits/stdc++.h>

using namespace std;

int n;

void display(int i)
{
     if(i==1)
     {
          cout<<i<<"\n";
          display(i+1);
     }
     else if(i%2==1)
     {
          cout<<i<<"\n";
          display(i-2);
     }
     else if(i+2<n)
     {
          cout<<i<<"\n";
          display(i+2);
     }
     else if(i+2==n)
          cout<<i<<"\n"<<n;
     else
          cout<<i;
}

int main()
{
     cin>>n;
     if(n==1)
          cout<<"1";
     else if(n%2==1)
          display(n);
     else
          display(n-1);
}
