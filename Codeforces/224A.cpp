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
    ll a,b,c;
    cin>>a>>b>>c;
    ll m=sqrt(a*b*c);
    ll x=m/a;
    ll y=m/b;
    ll z=m/c;
    cout<<4*(x+y+z)<<endl;
}