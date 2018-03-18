#include<bits/stdc++.h>

using namespace std;

void SelectionSort(int arr[],int s,int e)
{
     if(s>=e)
          return;
     int minIndx=s;
     for(int i=s;i<=e;i++)
     {
          if(arr[minIndx]>arr[i])
               minIndx=i;
     }
     swap(arr[s],arr[minIndx]);
     SelectionSort(arr,s+1,e);
}

int main()
{
     int n;
     cin>>n;

     int a[n],i;
     for(i=0;i<n;i++)
          cin>>a[i];
     SelectionSort(a,0,n-1);
     for(i=0;i<n;i++)
          cout<<a[i]<<" ";
}
