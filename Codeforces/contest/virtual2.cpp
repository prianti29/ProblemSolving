#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define rall(v)   v.rbegin(),v.rend()
#define meow ios::sync_with_stdio(0);cin.tie(0);
#define pi acos(-1)

typedef long long int ll;
typedef unsigned long long int ull;
typedef set<ll>st;
typedef set<char>sc;


int main()
{
    meow;
    ll t,n;
    vector<ll>v;
    cin>>t;
    for(ll i=0;i<t;i++){
        cin>>n;
        v.push_back(n);
    }
    sort(all(v));
    for(ll i=0;i<t;i++){
        cout<<v[i]<<" ";
    }

}
