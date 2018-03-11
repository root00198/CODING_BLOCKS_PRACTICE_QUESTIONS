#include<bits/stdc++.h>

using namespace std;

void edit(char str[],int repo)
{
     if(str[repo+1]=='\0')
          return;
     if(str[repo]=='x')
     {
          swap(str[repo],str[repo+1]);
          edit(str,repo+1);
     }
     edit(str,repo+1);
}

int main()
{
     char str[1000];
     cin>>str;

     edit(str,0);
     cout<<str;
}
