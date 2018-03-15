#include<bits/stdc++.h>

using namespace std;

int main()
{
     string str;
     cin>>str;

     for(int i=0;i<str.length();i++)
     {
          if(i%2==0)
               str[i]++;
          else
               str[i]--;
          cout<<str[i];
     }
}
