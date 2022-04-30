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
    ll t,n,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        for(ll i=0;i<n;i++){
            ll j;
            for(j=0;j<i;j++){
                break;
            }
        }
        if(i==j){
            cout<<i;
        }
        cout<<endl;
    }
}
