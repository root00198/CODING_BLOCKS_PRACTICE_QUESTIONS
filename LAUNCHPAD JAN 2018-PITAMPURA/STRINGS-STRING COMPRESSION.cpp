#include<bits/stdc++.h>

using namespace std;

int  main()
{
     string str;
     cin>>str;

     int count =1;
     char last_digit=str[0];
     cout<<last_digit;
     for(int i=1;i<str.length();i++)
     {
          if(str[i]==last_digit)
               count++;
          else if(count>1)
          {
               cout<<count;
               count=1;
               last_digit=str[i];
               cout<<last_digit;
          }
          else if(count==1)
          {
               last_digit=str[i];
               cout<<last_digit;
          }
     }
     if(count>1)
          cout<<count;
}
