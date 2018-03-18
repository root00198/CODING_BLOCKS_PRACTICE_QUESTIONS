#include<bits/stdc++.h>

using namespace std;

void print(string str,int repo,string str2)
{
     if(str[repo]=='\0')
     {
          if(str2<str)
               cout<<str<<"\n";
          return;
     }
     for(int i=repo;str[i]!='\0';i++)
     {
          swap(str[repo],str[i]);
          print(str,repo+1,str2);
          //swap(str[repo],str[i]);
     }
}

int main()
{
     string str;
     cin>>str;
     string str2=str;
     //int i=str.length();
     //sort(&str[0],&str[i]);
     print(str,0,str2);
}
