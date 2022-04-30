#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()

#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    meow;
    ll a,b,c,n,i;
    vector<ll>v;
    for(i=0; i<3; i++)
    {
        cin>>n;
        v.push_back(n);
    }
    ll x=v[0];
    ll y=v[1];
    ll z=v[2];
    sort(all(v));
    for(auto u:v)
    {
        cout<<u<<endl;
    }
    cout<<endl;
    v.clear();
    cout<<x<<endl<<y<<endl<<z<;
}
