#include<bits/stdc++.h>

using namespace std;

int sum(string str,int repo)
{
     if(str[repo]=='\0')
          return 0;
     int a= str[repo] - '0';
     return a+sum(str,repo+1);
}

int main()
{
     string str;
     cin>>str;

     cout<<sum(str,0);
}
