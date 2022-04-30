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
    ll n,a,ans=0;
    cin>>n;
    for(ll i=1;i<=n;i++){
        cin>>a;
         ans+=(a-1)*(i-1)+a;
    }
    cout<<ans<<endl;
}
