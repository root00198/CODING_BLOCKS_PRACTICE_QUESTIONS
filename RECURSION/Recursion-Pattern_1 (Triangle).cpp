#include<bits/stdc++.h>

using namespace std;

void display(int n)
{
     if(n==0)
          return;
     display(n-1);
     for(int i=0;i<n;i++)
          cout<<"*\t";
     cout<<"\n";
}

int main()
{
     int n;
     cin>>n;

     display(n);
}
