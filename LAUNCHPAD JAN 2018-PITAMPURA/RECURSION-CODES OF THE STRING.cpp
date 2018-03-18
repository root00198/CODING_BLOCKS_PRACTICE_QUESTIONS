#include<bits/stdc++.h>

using namespace std;

char word[][1]={' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

void COS(string str,string current,int repo,string out[],int &outpos)
{
     if(str[repo]=='\0')
     {
          out[outpos]=current;
          outpos++;
          return;
     }
     if(str[repo]!='0')
     {
          COS(str,current+word[str[repo]-'0'][0],repo+1,out,outpos);
          //cout<<str[repo]<<"  "<<str[repo]-'0'<<" "<<word[str[repo]-'0'][0]<<"\n";
     }
     if(str[repo+1]!='\0')
     {
          int first = str[repo]-'0';
          int second= str[repo+1] - '0';
          first*=10;
          first+=second;
          if(first>=1&&first<=26)
          {
               COS(str,current+word[first][0],repo+2,out,outpos);
          }
     }
}
int main()
{
     string str;
     cin>>str;

     string out[1000];
     int outpos=0;

     COS(str,"",0,out,outpos);

     cout<<"[";
     for(int i=0;i<outpos-1;i++)
          cout<<out[i]<<", ";
     cout<<out[outpos-1]<<"]";
}
