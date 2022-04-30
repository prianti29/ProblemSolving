#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,j,k,cnt=0;
    cin>>m>>n;
    int arr[m][n];
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    cin>>k;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            //cin>>arr[i][j];
            if(arr[i][j]==k)
            {
                 cnt=1;
                break;
            }
            else
                 cnt=0;
        }
    }
    if(cnt==1)
    {
        cout<<"will not take number"<<endl;
    }
    else
        cout<<"will take number"  <<endl;
}
