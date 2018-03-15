#include<bits/stdc++.h>

using namespace std;

int main()
{
     float a,b,c;
     cin>>a>>b>>c;
     float d= b*b -4*(a*c);

     if(d<0)
          cout<<"imaginary\n";
     else if(d==0)
     {
          cout<<"real and equal\n";
          float x1 = (-1*b)/(2*a);
          cout<<x1<<" "<<x1;
     }
     else
     {
          cout<<"Real and Distinct\n";
          float x1 = ((-1*b) + (sqrt(d)))/(2*a);
          float x2 = ((-1*b) - (sqrt(d)))/(2*a);
          cout<<x2<<" "<<x1;
     }
}

