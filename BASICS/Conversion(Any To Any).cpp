#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
     int n1,n2;
     cin>>n1>>n2;
     long number=0,num;
     int x=0;
     cin>>num;

     while(num>0)
     {
          int digit=num%10;
          num/=10;
          number+=pow(n1,x)*digit;
          x++;
     }
     //cout<<number<<"\n";
     int a[number],i=0;

     while(number>0)
     {
          a[i]=number%n2;
          i++;
          number/=n2;
     }
     i--;
     for(;i>=0;i--)
          cout<<a[i];
}
