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
    ll t,a,b,c,d,m,n,o,p,q,r;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        m=a/c;
        n=min(m,b);
        o=b-n;
        p=(o+c-2)/(c-1);
        q=p-n;
        cout<<abs(q)<<endl;
    }
}
