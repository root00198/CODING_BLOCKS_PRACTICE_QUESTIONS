#include<iostream>

using namespace std;

long count;

int check(int a[],int n)
{
     for(int i=0;i<n;i++)
          if(a[i]==1)
               return 0;
     return 1;
}
void display(int a[],string s,int n)
{
   if(check(a,n)==1)
   {
     count++;
     cout<<count<<"\n";
     //   return 0;
   }
   else
   {
        //cout<<"2";
        count++;
        if(a[n-1]==0)
        {
               int i;
               for(i=n-2;i>=0;i--)
                    if(a[i]==1)
                         break;
               if(i!=-1)
               {
                    a[i]--;
                    for(int k=n-1;k>i;k--)
                         a[k]=1;
               }
               else
               {
                    for( i=0;i<n;i++)
                         a[i]=0;
               }
        }
        else
          a[n-1]--;
         // cout<<"1  ";
          display(a,s,n);
         // cout<<"2 ";

          for(int k=0;k<n;k++)
        {
             if(a[k]==1)
               cout<<s[k];
        }
        cout<<" ";

        if(a[n-1]==1)
        {
               int i;
               for(i=n-2;i>=0;i--)
                    if(a[i]==0)
                         break;
               if(i!=-1)
               {
                    a[i]=1;
                    for(int k=n-1;k>i;k--)
                         a[k]=0;
               }
        }
        else
          a[n-1]++;
     }

}

int  main()
{
     count=0;
     string s;
     cin>>s;
     int n=s.length();
     int a[n];
     for(int i=0;i<s.length();i++)
          a[i]=1;

     display(a,s,n);
     cout<<s;
}
