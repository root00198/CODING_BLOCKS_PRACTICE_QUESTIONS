#include<iostream>

using namespace std;

int main()
{
     char ch;
     long a,b;
     cin>>ch;
     while(ch!='X'||ch!='x')
     {
          if(ch=='x'||ch=='X')
               break;
          if(ch=='+')
          {
               cin>>a>>b;
               cout<<a+b<<"\n";
          }
          else if(ch=='-')
          {
               cin>>a>>b;
               cout<<a-b<<"\n";
          }
          else if(ch=='/')
          {
               cin>>a>>b;
               cout<<a/b<<"\n";
          }
          else if(ch=='%')
          {
               cin>>a>>b;
               cout<<a%b<<"\n";
          }
          else if(ch=='*')
          {
               cin>>a>>b;
               cout<<a*b<<"\n";
          }
          else
               cout<<"Invalid operation. Try again.\n";
          cin>>ch;
     }
}
