#include<bits/stdc++.h>

using namespace std;

void substring(string str,int repo,string out[],int &outpos)
{
     if(str[repo]=='\0')
     {
          out[outpos]="";
          outpos++;
          return;
     }
     substring(str,repo+1,out,outpos);

     for(int i=0;i<outpos;i++)
          out[i+outpos]=str[repo] + out[i];
     outpos*=2;

}

int main()
{
     string str;
     cin>>str;
     string out[1024];
     int outpos=0;

     substring(str,0,out,outpos);

     cout<<pow(2,str.length())<<"\n";
     for(int i=0;i<pow(2,str.length());i++)
          cout<<out[i]<<" ";
}
