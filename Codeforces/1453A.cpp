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
    ll t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<ll> v(n+m); //to get value of n and m
        for(ll &a : v){
            cin>>a;
        }
        sort(all (v));
        ll ans= v.end()-unique(all (v));
        cout<<ans<<endl;
    }
}
