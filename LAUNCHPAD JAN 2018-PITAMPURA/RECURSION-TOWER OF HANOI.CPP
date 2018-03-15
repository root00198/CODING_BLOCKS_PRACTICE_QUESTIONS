#include<bits/stdc++.h>

using namespace std;

void TOH(string fr,string to,string us,int n,int &count)
{
     if(n==0)
          return;
     TOH(fr,us,to,n-1,count);
     count++;
     cout<<"Move "<<n<<"th disc from "<<fr<<" to "<<to<<"\n";
     TOH(us,to,fr,n-1,count);
}

int main()
{
     int n;
     cin>>n;
     int count=0;
     TOH("T1","T2","T3",n,count);
     cout<<count;
}
