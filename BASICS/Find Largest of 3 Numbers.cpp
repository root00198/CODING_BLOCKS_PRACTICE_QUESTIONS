#include<iostream>

using namespace std;

int main()
{
     int t,largest;
     cin>>t;
     largest = t;

     for(int i=0;i<2;i++)
     {
          cin>>t;
          if(t>largest)
               largest = t;
     }
     cout<<largest;
}
