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
    ll t,n,a;
    vector<ll>v;
    cin>>t;
    while(t--){
        cin>>n;
        //ll arr[n];
        for(ll i=0;i<n;i++){
          cin>>a;
          v.push_back(a);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        cout<<min((v[1]-1),(n-2))<<endl;
        v.clear();
    }

}
