#include<iostream>

using namespace std;

int main()
{
     int n,i,j;
     cin>>n;
     cout<<"1\n";
     if(n!=1)
     {
          for(i=1;i<n;i++)
          {
               cout<<i;
               for(j=1;j<i;j++)
                    cout<<"0";
               cout<<i;
               cout<<"\n";
          }
     }
}

