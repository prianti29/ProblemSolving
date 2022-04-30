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
    ll m,n;
    ll t;
    cin>>t;
    while(t--){
        cin>>m>>n;
    ll cnt1=(m/n)*n;
    ll cnt2=min(n/2,m%n);
    cout<<cnt1+cnt2<<endl;
    }

}
