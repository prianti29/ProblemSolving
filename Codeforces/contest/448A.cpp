#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    meow;
    float q,a,b,c,n,m,o,x,y;
    cin>>a>>b>>c>>n>>m>>o>>q;
    x= ceil ((a+b+c)/5);
    y= ceil ((n+m+o)/10);
    if((x+y)<=q)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
