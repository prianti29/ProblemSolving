#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==m-1&&j==n-1)
                    cout<<"W";
                else
                    cout<<"B";
            }

        cout<<endl;
        }
    }
}
