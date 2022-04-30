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
    ll n,m;
    vector<ll>v;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>m;
        v.push_back(m);
    }
   sort(all(v)) ;
    cout<<v[n-1]-v[0]+1-n<<endl;
}
