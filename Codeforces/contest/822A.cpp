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
    ll a,b,m,fact=1;
    cin>>a>>b;
    m=min(a,b);
    for(ll i=1;i<=m;i++){
        fact*=i;
    }
    cout<<fact<<endl;
}
