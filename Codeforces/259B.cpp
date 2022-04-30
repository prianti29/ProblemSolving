#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,sum=0,ava,k,l;
    long long arr[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
            sum=sum+arr[i][j];
        }
    }
    ava=sum/2;
    arr[0][0]=ava-arr[0][1]-arr[0][2];
    arr[1][1]=ava-arr[1][0]-arr[1][2];
    arr[2][2]=ava-arr[2][0]-arr[2][1];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
