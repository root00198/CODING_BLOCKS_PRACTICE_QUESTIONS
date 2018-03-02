#include<bits/stdc++.h>

using namespace std;

int palindrome(int i,int j,string str)
{
     if(i==j)
          return 1;
     for(;i<=j;)
     {
          if(str[i]!=str[j])
               break;
          i++;j--;
     }
     if(i>j)
          return 1;
     else
          return 0;
}

int main()
{
     string str;
     cin>>str;
     int n=str.length();
     int i,j,count=0;
     for(i=0;i<n;i++)
     {
          for(j=i;j<n;j++)
          {
               if(palindrome(i,j,str)==1)
                    count++;
          }
     }
     cout<<count;
}
