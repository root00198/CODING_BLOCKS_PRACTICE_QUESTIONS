#include<bits/stdc++.h>

using namespace std;

char word[][5]={" ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void display(int arr[],int n,int repo,string out[],int &outpos,string preword)
{
     //cout<<repo;
     if(repo==n)
          return;
     for(int i=0;word[arr[repo]][i]!='\0';i++)
     {
          out[outpos]=preword+word[arr[repo]][i];
          string qwe=preword;
          preword=preword+word[arr[repo]][i];
          display(arr,n,repo+1,out,outpos,preword);
          preword = qwe;
          if(repo+1==n)
               outpos++;
     }
}

int main()
{
     long n;
     cin>>n;
     int arr[100],digit=0;
     while(n>0)
     {
          arr[digit++]=n%10;
          n/=10;
     }
     for(int f=0;f<digit/2;f++)
          swap(arr[f],arr[digit-f-1]);
     string out[1000];
     int outpos=0;
     display(arr,digit,0,out,outpos,"");
     cout<<outpos<<"\n";
     for(int i=0;i<outpos;i++)
          cout<<out[i]<<" ";
}
