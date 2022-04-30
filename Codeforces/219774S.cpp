#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,n,m,i,j;
    cin>>n>>m;
    vector<vector<int> > arr( n, vector<int> (m));
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    cin>>a;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(a==arr[i][j])
            {
                cout<<"will not take number"<<endl;
                return 0;
            }
        }
    }
    cout<<"will take number"<<endl;
}
