#include<bits/stdc++.h>

using namespace std;

bool palindrome(string str,int repo,int last)
{
     if(repo>=last)
          return true;
     if(str[repo]==str[last]&&palindrome(str,repo+1,last-1))
          return true;
     return false;
}
int main()
{
     string str;
     cin>>str;

     if(palindrome(str,0,str.length()-1))
          cout<<"true";
     else
          cout<<"false";
}
