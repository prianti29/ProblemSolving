
#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

const double PI = acos(-1);

int main()
{
    ll a,b,m,n,i,j;
    vector<ll>v;
    cin>>m>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    ll cnt=0,ans;
    cnt=v[n-1]-v[0];
    for(i=m;i<=n;i++){
         ans=v[i-1]-v[i-m];
         ans=abs(ans);
         cnt=min(cnt,ans);
    }
    cout<<cnt;
}
