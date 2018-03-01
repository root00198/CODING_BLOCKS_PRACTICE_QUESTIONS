#include<bits/stdc++.h>

using namespace std;

int main()
{
     string str;
     cin>>str;

     vector <int> a(127,0);

     int i,max=0,index;
     for(i=0;i<str.length();i++)
     {
          //cout<<str[i]-97<<"\n";
          a[str[i]]++;
     }
     for(i=0;i<127;i++)
     {
          if(a[i]>max)
          {
               index=i;
               max=a[i];
          }
     }
    // cout<<index<<"\n";
     string str2=" ";
     str2[0]+=index-32;
     cout<<str2;
}
