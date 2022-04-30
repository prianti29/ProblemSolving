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
    ll ans=3*(min (min(a+1,b),c-1));
    cout<<ans<<endl;
}
