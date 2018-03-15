#include<bits/stdc++.h>

using namespace std;

int main()
{
     string str;
     cin>>str;

     int i;
     for(i=0;i<str.length();i++)
     {
          if(i==0)
               cout<<str[i];
          else if(str[i]!=str[i-1])
                    cout<<str[i];
     }
}
