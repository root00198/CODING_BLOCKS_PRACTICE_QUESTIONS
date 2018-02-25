#include<iostream>

using namespace std;

int main()
{
     int n,m;
     long num1=0,num2=0;

     cin>>n;
     while(n--)
     {
          cin>>m;
          num1= (num1*10)+m;
     }
     cin>>n;
     while(n--)
     {
          cin>>m;
          num2 = (num2*10) +m;
     }
     long ans = num1+ num2;

     int a[ans],i=0;

     while(ans>0)
     {
          a[i]=ans%10;
          ans/=10;
          i++;
     }
     i--;
     for(;i>=0;i--)
     {
          cout<<a[i]<<", ";
     }
     cout<<"END";
}
