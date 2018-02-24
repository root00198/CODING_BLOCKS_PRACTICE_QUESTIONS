#include<bits/stdc++.h>

using namespace std;

int main()
{
     char ch;
     cin>>ch;

     if(ch>=65&&ch<=90)
          cout<<"UPPERCASE";
     else if(ch>=97&&ch<=122)
          cout<<"lowercase";
     else
          cout<<"Invalid";
}
