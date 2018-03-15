#include<bits/stdc++.h>

using namespace std;

void TOH(char fr,char to,char us,int n)
{
     if(n==0)
          return;
     TOH(fr,us,to,n-1);
     cout<<"Moving ring "<<n<<" from "<<fr<<" to "<<to<<"\n";
     TOH(us,to,fr,n-1);
}

int main()
{
     int n;
     cin>>n;

     TOH('A','B','C',n);
}
