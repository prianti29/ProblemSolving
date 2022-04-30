#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,m,n;
    long long arr[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j];
        }
    }
}
