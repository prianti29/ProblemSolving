#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,m,n,a=0,b=0,c=0;
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>n>>j>>k;
        a+=n;
        b+=j;
        c+=k;
    }
    if(a==0&&b==0&&c==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
