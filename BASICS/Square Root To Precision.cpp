#include<bits/stdc++.h>

using namespace std;

int main()
{
          long n;
          int p;
          cin>>n>>p;
          string str;
          ostringstream convert;
          convert<<sqrt(n);
          str = convert.str();
          int count=0;
          bool flag=false;
          int n1=sqrt(n);
          if(n!=n1*n1)
          {
               for(int i=0;i<str.length();i++)
               {
                    if(flag==false&&str[i]=='.')
                    {
                         flag=true;
                    }
                    if(flag&&str[i]!='.')
                    {
                         count++;
                    }
                    cout<<str[i];
                    if(count==p)
                         break;
               }
               if(count<p)
               {
                    int i=count;
                    for(;i<p;i++)
                         cout<<"0";
               }
               cout<<"\n";
          }
          else
          {
               cout<<fixed<<setprecision(p)<<sqrt(n);
          }
}
