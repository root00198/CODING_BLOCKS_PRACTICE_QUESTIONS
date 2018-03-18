#include<bits/stdc++.h>

using namespace std;

void print(string str,int repo,string out[],int &outpos)
{
     if(str[repo]=='\0')
     {
          out[outpos++]=str;
          return;
     }
     for(int i=repo;str[i]!='\0';i++)
     {
          swap(str[repo],str[i]);
          print(str,repo+1,out,outpos);
          swap(str[repo],str[i]);
     }
}

int main()
{
     string str;
     cin>>str;
     string out[1000];
     int outpos=0;
     int i=str.length();
     sort(&str[0],&str[i]);
     print(str,0,out,outpos);
     sort(out,out+outpos);
     for(i=0;i<outpos;i++)
          cout<<out[i]<<"\n";
}
