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
    ll a,b,t;
    ll i,ans=0,p=100;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>a>>b;
        p=min(b,p);
      //  cout<<p<<endl;
        ans+=a*p;
    }
    cout<<ans<<endl;
}
