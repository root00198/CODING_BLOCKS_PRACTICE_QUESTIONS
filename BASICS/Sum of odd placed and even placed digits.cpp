#include<bits/stdc++.h>

using namespace std;

int main()
{
     string str;
     cin>>str;

     long odd=0,even=0;

     long i=0;
     if(str.length()%2==1)
     {
          while(i<str.length())
          {
               if(i%2==0)
                    odd+=str[i]-48;
               else
                    even+=str[i]-48;
               i++;
          }
     }
     else
     {
          while(i<str.length())
          {
               if(i%2==1)
                    odd+=str[i]-48;
               else
                    even+=str[i]-48;
               i++;
          }
     }
     cout<<odd<<"\n"<<even;
}
