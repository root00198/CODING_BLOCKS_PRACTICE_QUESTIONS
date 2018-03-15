#include<bits/stdc++.h>

using namespace std;

int main()
{
     string str;
     cin>>str;
     long num=0;

     int n1=str.length(),n2=0;
     while(n1--)
     {
          if(str[n1]=='1')
               num+=pow(2,n2);
          n2++;
     }
     cout<<num;
}
