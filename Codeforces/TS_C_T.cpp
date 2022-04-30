#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100][100],n,i,j,c=0,d=0,sum=0;
    cin>>n;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            cin>>arr[i][j];
    for(i=0; i<n; i++)
        c=c+arr[i][i];
    for(i=0; i<n; i++)
        d=d+arr[i][n-1-i];
    sum=abs(c-d);
    cout<<sum<<endl;
}
