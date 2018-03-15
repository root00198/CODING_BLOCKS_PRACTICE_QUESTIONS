
#include<bits/stdc++.h>

using namespace std;

int countoverlapAAA(string str,int repo)
{
     if(str[repo]=='\0'||str[repo+1]=='\0'||str[repo+2]=='\0')
          return 0;
     if(str[repo]=='a'&&str[repo+1]=='a'&&str[repo+2]=='a')
          return 1+countoverlapAAA(str,repo+1);
     return countoverlapAAA(str,repo+1);
}
int countAAA(string str,int repo)
{
     if(str[repo]=='\0'||str[repo+1]=='\0'||str[repo+2]=='\0')
          return 0;
     if(str[repo]=='a'&&str[repo+1]=='a'&&str[repo+2]=='a')
          return 1+countAAA(str,repo+3);
     return countAAA(str,repo+1);
}

int main()
{
     string str;
     cin>>str;
     cout<<countoverlapAAA(str,0)<<"\n";
     cout<<countAAA(str,0);
}
