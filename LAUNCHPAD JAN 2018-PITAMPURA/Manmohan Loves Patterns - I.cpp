#include<iostream>

using namespace std;

int main()
{
     int i,j,n;
     cin>>n;

     for(i=1;i<=n;i++)
     {
          if(i%2==1)
          {
               for(j=1;j<=i;j++)
                    cout<<"1";
          }
          else
          {
               cout<<"1";
               for(j=1;j<=i-2;j++)
                    cout<<"0";
               cout<<"1";
          }
          cout<<"\n";
     }
}
