#include<bits/stdc++.h>

using namespace std;

int convert(string str,int repo,long &pv)
{
     if(str[repo]=='\0')
          return 0;
     int a = str[repo]-'0';
     //cout<<a<<"  "<<repo<<"\n";
     int d=convert(str,repo+1,pv);
     a=(a*pv)+d;
     pv*=10;
     return a;
}

int main()
{
     string str;
     cin>>str;

     long pv=1;
     cout<<convert(str,0,pv);
}

