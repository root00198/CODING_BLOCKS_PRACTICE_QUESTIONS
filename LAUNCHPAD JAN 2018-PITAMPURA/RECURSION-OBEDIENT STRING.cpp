#include<bits/stdc++.h>

using namespace std;

bool check(string str,int repo,char last)
{
     if(str[repo]=='\0')
          return true;
     if(repo==0&&str[repo]=='a')
          return check(str,repo+1,'a');
     if(str[repo]=='b'&&str[repo+1]=='b'&&last=='a')
          return check(str,repo+2,'b');
     if(last=='b'&&str[repo]=='a')
          return check(str,repo+1,'a');
     if(last=='a'&&str[repo]=='a')
          return check(str,repo+1,'a');
     return false;
}

int main()
{
     string str;
     cin>>str;

     if(check(str,0,'a'))
          cout<<"true";
     else
          cout<<"false";
}
