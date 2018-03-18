#include<iostream>

using namespace std;

void lx(int start,int end)
{
     int a;
     if(start==0)
          a=1;
     else
          a=0;
     for(int i=a;i<=9;i++)
     {
          if(start*10+i>end)
               return;
          cout<<start*10+i<<" ";
          lx(start*10+i,end);
     }
}

int main()
{
     cout<<"0 ";
     int n;
     cin>>n;
     lx(0,n);
}

