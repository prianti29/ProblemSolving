#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef double dl;
typedef unsigned long long int ull;

int main()
{
    meow;
    ll a,b,c,i;
    vector<ll>v;
    for(i=0;i<4;i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    cout<<v[3]-v[0]<<" "<<v[3]-v[1]<<" "<<v[3]-v[2];
}
