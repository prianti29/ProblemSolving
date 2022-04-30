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
    ll n,m,a;
    vector<ll>v,v1;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    sort(all(v));
    cin>>m;
    for(ll i=0;i<m;i++){
        cin>>a;
        v1.push_back(a);
    }
    sort(all(v1));
    cout<<v[n-1]<<" "<<v1[m-1]<<endl;
}
