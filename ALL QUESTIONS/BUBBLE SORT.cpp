#include<bits/stdc++.h>

using namespace std;

void BubbleSort(int arr[],int s,int e)
{
     if(s>=e)
          return;
     if(arr[s]>arr[s+1])
     {
          swap(arr[s],arr[s+1]);
     }
     BubbleSort(arr,s+1,e);
     BubbleSort(arr,s,e-1);
}

int main()
{
     int n;
     cin>>n;

     int a[n],i;
     for(i=0;i<n;i++)
          cin>>a[i];
     BubbleSort(a,0,n-1);
     for(i=0;i<n;i++)
          cout<<a[i]<<" ";

}
