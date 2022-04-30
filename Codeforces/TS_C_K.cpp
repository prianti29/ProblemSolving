#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,i,j,c,k,maxx;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ara[n];
        for(i=1;i<=n;i++)
        {
            cin>>ara[i];
        }
        for(i=1;i<=n;i++)
        {
            for(j=i;j<=n;j++)
            {
                c=0;
                for(k=i;k<j+1;k++)
                {
                    if(c==0)
                    {
                        c=1;
                        maxx=ara[k];
                    }
                    if(ara[k]>maxx)
                    {
                        maxx=ara[k];
                    }
                    //cout<<maxx<<" ";
                    //cout<<ara[k]<<" ";
                }
                cout<<maxx<<" ";
                //cout<<endl;

            }
        }
        cout<<endl;
    }
}
