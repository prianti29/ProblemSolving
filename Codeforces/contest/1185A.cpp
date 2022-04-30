
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
    vector<ll>v(3);
    ll n,ans=0;
    cin>>v[0]>>v[1]>>v[2]>>n;
    sort(all(v));
    if(v[1]-v[0]<n){
        ans += (abs(v[1]-v[0]-n));
    }
    if(v[2]-v[1]<n){
        ans += abs((v[2]-v[1]-n));
    }
    cout<<ans<<endl;
}
