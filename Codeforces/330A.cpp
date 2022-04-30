#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,i,j,dot=0,ans=0;
    char ch[i][j];
    cin>>r>>c;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>ch[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(ch=='.')
            {
                dot++;
            }
            else
            {
                dot=0;
                break;
            }
        }
    }
    ans=ans+dot;
    cout<<ans;
}
