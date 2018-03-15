#include<bits/stdc++.h>

using namespace std;

void display(string str,int i)
{
     if(i>=str.length())
          return;
     if(str[i]=='p'&&str[i+1]=='i')
     {
          cout<<"3.14";
          display(str,i+2);
     }
     else
     {
          cout<<str[i];
          display(str,i+1);
     }

}

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          string s;
          cin>>s;

          display(s,0);
          cout<<"\n";
     }
}
