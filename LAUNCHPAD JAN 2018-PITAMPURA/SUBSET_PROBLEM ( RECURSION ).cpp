#include<bits/stdc++.h>

using namespace std;

void subset(int arr[],int repo,int out[][100],int &outpos,int n)
{
     if(repo==n)
     {
          out[0][0]=-1;
          outpos++;
          return;
     }
     subset(arr,repo+1,out,outpos,n);
     for(int i=0;i<outpos;i++)
     {
          out[outpos+i][0]=arr[repo];
          int k;
          //out[i+outpos][k]=out[i][k];
          for(int j=0;out[outpos+i][j]!=0;j++)
               out[i+outpos][j+1]=out[i][j];
     }
     outpos*=2;
}

int main()
{
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
          cin>>arr[i];
     int out[100][100]={};
     int outpos=0;
     int sum1;
     cin>>sum1;
     subset(arr,0,out,outpos,n);
     //cout<<outpos<<"\n";
     int sum=0;
     int cnt=0;
     for(int i=outpos-1;i>=0;i--)
     {
          sum=0;
          for(int j=0;out[i][j]!=-1;j++)
          {
               sum +=out[i][j];
          }
          if(sum==sum1)
               cnt++;
          else
               out[i][0]=-1;
     }
     cout<<cnt<<"\n";
     for(int i=outpos-1;i>=0;i--)
     {
          if(out[i][0]!=-1)
          {
               for(int j=0;out[i][j]!=-1;j++)
               {
                    cout<<out[i][j]<<" ";
               }
               cout<<" ";
          }
     }


}
