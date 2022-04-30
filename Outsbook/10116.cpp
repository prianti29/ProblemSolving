#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,a,i,j,k,b,c,d,m;
    cin>>j;
    for(i=1;i<=j;i++)
    {
        cin>>a>>b>>c>>d;
        m=a/b;
        n=c/d;
        if(m>n)
            cout<<"Case "<<i<<": "<<"X > Y"<<endl;
        else if(m==n)
            cout<<"Case "<<i<<": "<<"X = Y"<<endl;
        else if(m<n)
            cout<<"Case "<<i<<": "<<"X < Y"<<endl;
    }
}
