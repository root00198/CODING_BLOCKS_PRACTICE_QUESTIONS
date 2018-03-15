#include<bits/stdc++.h>

using namespace std;

void edit(char str[],int repo,char current)
{
     if(str[repo]=='\0')
          return;
     if(str[repo]==current)
     {
          for(int i=repo;i<strlen(str);i++)
               str[i]=str[i+1];
          //current=' ';
          edit(str,repo,current);
     }
     else
     {
          current=str[repo];
          edit(str,repo+1,current);
     }
}

int main()
{
     char str[1000];
     cin>>str;

     edit(str,0,' ');
     cout<<str;
}
