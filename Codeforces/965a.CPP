
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
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    ll m=ceil(b/c);
    ll n=ceil(m*a);
    ll o=ceil(n/d);
    cout<<fixed<<setprecision(0)<<o<<endl;
}
