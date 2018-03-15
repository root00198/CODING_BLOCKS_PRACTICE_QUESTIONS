#include<bits/stdc++.h>

using namespace std;

int twins(string str,int repo)
{
     if(str[repo]=='\0'||str[repo+1]=='\0')
          return 0;
     if(str[repo]==str[repo+2])
          return 1 + twins(str,repo+1);
     return twins(str,repo+1);
}
int main()
{
     string str;
     cin>>str;

     cout<<twins(str,0);
}
