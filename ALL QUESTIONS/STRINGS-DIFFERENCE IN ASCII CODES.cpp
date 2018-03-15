#include<bits/stdc++.h>

using namespace std;

string convert(int t)
{
     ostringstream ss;
     ss<<t;
     return ss.str();
}

int main()
{
     string str;
     cin>>str;
     string str2="";
     bool flag=false;
     int i;
     for(i=0;i<str.length();)
     {
          if(flag==false)
          {
               str2+=str[i];
               flag=true;
               i++;
          }
          else
          {
               int x;
               x=str[i]-str[i-1];
               str2+=convert(x);
               flag = false;
          }
     }
     cout<<str2;
}
