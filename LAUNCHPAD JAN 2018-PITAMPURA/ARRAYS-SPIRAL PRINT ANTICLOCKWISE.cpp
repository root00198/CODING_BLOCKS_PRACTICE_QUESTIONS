#include <iostream>
using namespace std;

int main(){
    int rows,cols;
    cin>>rows>>cols;
    int arr[rows][cols];
    for(int i=0;i<rows;i++)
    {
         for(int j=0;j<cols;j++)
          cin>>arr[i][j];
    }

    int rs=0,re=rows-1,cs=0,ce=cols-1;

    while (rs<=re && cs<=ce){
        for (int i=rs;i<=re;i++) cout<<arr[i][cs]<<", ";
        cs++;
        for (int i=cs;i<=ce;i++) cout<<arr[re][i]<<", ";
        re--;
        if (rs>re || cs>ce) break;
        for (int i=re;i>=rs;i--) cout<<arr[i][ce]<<", ";
        ce--;
        for (int i=ce;i>=cs;i--) cout<<arr[rs][i]<<", ";
        rs++;
    }
    cout<<"END";
}
