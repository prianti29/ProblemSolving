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
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll ans=n+((n-1)/9);
        cout<<ans<<endl;
    }
}
