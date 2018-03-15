#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          string str;
          cin>>str;
          long int number=0;
          int x=str.length()-1;
          int x1=0;
          while(x>=0)
          {
               if(str[x]=='1')
                    number+=pow(2,x1);
               x1++;
               x--;
          }
          cout<<number<<"\n";
     }
}
