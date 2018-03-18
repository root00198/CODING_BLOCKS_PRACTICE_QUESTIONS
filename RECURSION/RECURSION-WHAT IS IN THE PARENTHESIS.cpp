#include<bits/stdc++.h>

using namespace std;

void display(string str,int repo,bool &flag)
{
     if(flag&&str[repo]==')')
          return;
     else if(str[repo]=='\0')
          return;
     if(flag)
          cout<<str[repo];
     if(flag==false&&str[repo]=='(')
          flag=true;
     display(str,repo+1,flag);
}

int main()
{
     string str;
     cin>>str;
     bool flag=false;
     display(str,0,flag);
}
