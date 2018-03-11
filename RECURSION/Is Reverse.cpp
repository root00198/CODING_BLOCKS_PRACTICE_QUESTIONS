#include<bits/stdc++.h>

using namespace std;

bool checkreverse(string str1,string str2,int repostr1,int repostr2)
{
     if(str1[repostr1]=='\0'&&repostr2==-1)
          return true;
     else if(str1[repostr1]=='\0'||repostr2==-1)
          return false;
     if(str1[repostr1]==str2[repostr2]&&checkreverse(str1,str2,repostr1+1,repostr2-1))
          return true;
     return false;
}
int main()
{
     string str1,str2;
     cin>>str1>>str2;

     if(checkreverse(str1,str2,0,str2.length()-1))
          cout<<"true";
     else
          cout<<"false";
}
