#include<bits/stdc++.h>

using namespace std;

long k[1000][1000];

long knapsack(int wt[],int val[],int w,int n)
{
     if(n==0||w==0)
     {
          k[n][w]=0;
          return 0;
     }
     else if(wt[n-1]>w)
     {    if(k[n-1][w]>-1)
          return k[n-1][w];
          else
          {
               k[n-1][w]= knapsack(wt,val,w,n-1);
               return k[n-1][w];
          }
     }
     else
     {
          if(k[n-1][w]>-1&&k[n-1][w-wt[n-1]]>-1)
               return max(val[n-1]+k[n-1][w-wt[n-1]],k[n-1][w]);
          else if(k[n-1][w]>-1)
               {
                    k[n-1][w-wt[n-1]]=knapsack(wt,val,w-wt[n-1],n-1);
                    return max(val[n-1]+k[n-1][w-wt[n-1]],k[n-1][w]);
               }
          else if(k[n-1][w-wt[n-1]]>-1)
               {
                    k[n-1][w]=knapsack(wt,val,w,n-1);
                    return max(val[n-1]+k[n-1][w-wt[n-1]],k[n-1][w]);
               }
          else
          {
               k[n-1][w-wt[n-1]]=knapsack(wt,val,w-wt[n-1],n-1);
               k[n-1][w]=knapsack(wt,val,w,n-1);
               return max(val[n-1]+k[n-1][w-wt[n-1]],k[n-1][w]);
          }

     }
}
int main()
{
     int n,w,i;
     cin>>w>>n;
     int wt[n],val[n];
     for(i=0;i<n;i++)
          cin>>wt[i]>>val[i];
     for(i=0;i<=n;i++)
     {
          for(int j=0;j<=w;j++)
               k[i][j]=-1;
     }
     long f =knapsack(wt,val,w,n);

     cout<<f;

}

