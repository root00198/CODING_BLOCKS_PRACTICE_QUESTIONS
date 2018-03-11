#include<bits/stdc++.h>

using namespace std;

void edit(char str[],char current,int repo)
{
     if(str[repo]=='\0')
          return;
     if(str[repo]==current)
     {
         // cout<<"1";
          for(int i=strlen(str);i>=repo;i--)
               str[i+1]=str[i];
          str[repo]='*';
          current='*';
     }
     else
          current = str[repo];
     edit(str,current,repo+1);
}

int main()
{
     char str[1000];
     cin>>str;
     edit(str,'*',0);
     cout<<str;
}
