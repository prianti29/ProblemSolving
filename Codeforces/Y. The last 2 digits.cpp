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
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll ans=(a*b*c*d);
    if(ans>100)
    cout<<ans%100<<endl;
    else
        cout<<ans<<endl;
}
