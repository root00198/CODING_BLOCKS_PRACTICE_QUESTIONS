#include<bits/stdc++.h>

using namespace std;

int main()
{
     string str;
     cin>>str;

     int i=0;
     while(i<str.length())
     {
          if(str[i]=='0')
               cout<<"5";
          else
               cout<<str[i];
          i++;
     }
}
