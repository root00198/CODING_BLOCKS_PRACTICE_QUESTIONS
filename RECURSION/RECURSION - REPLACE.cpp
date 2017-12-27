#include<bits/stdc++.h>
#include<cstdio>

using namespace std;

int flag=0;

void display(int i,string s)
 {
      if(i==s.length())
     {
          if(flag!=0)
          {
               while(flag>0)
               {
                    cout<<s[i-flag];
                    flag--;
               }
          }
     }
     else if(s[i]=='3')
     {
          flag++;
          display(i+1,s);
     }
     else if(s[i]=='.'&&flag==1)
     {
          flag++;
          display(i+1,s);
     }
     else if(s[i]=='1'&&flag==2)
     {
          flag++;
          display(i+1,s);
     }
     else if(s[i]=='4'&&flag==3)
     {
          flag=0;
          cout<<"pi";
          display(i+1,s);
     }
     else if(flag!=0)
     {
          while(flag>-1)
          {
               cout<<s[i-flag];
               flag--;
          }
          flag=0;
          display(i+1,s);
     }
     else
     {
          cout<<s[i];
          display(i+1,s);
     }
}



int main()
{
     char s[1000];
     int n;
     cin>>n;
     cin.ignore();
     while(n--)
     {
          cin.getline(s,1000);
          display(0,s);
          cout<<"\n";
     }
}
