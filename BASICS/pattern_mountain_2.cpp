#include<iostream>
using namespace std;

int main()
{  
	int i,j,n;
	//cout<<"Enter Largest Alphabet Value(e.g C=3):";
	cin>>n;
	for(i=n;i>0;i--)
	{
		for(j=1;j<(2*n);j++)
		{ 
			if(j>=n+i)
				cout<<(n-(j%n))<<" ";
			else if(j<=n-i)
				cout<<j<<" ";
			else
				cout<<" "<<" ";
		}
		cout<<endl;
	}
	for(int p =1 ; p<=n;p++)
	 cout<<p<<" ";
	 for(int p=(n-1) ;p>0;p--)
	  cout<<p<<" ";

	return 0;
}
