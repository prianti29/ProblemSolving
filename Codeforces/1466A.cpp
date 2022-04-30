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
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        //ll arr[n];
        vector<ll>arr(n);
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        set<ll>s;
        for(ll i=0;i<n;i++)
            for(ll j=i+1;i<n;j++)
                s.insert(abs(arr[i]-arr[j]));


        cout<<s.size()<<endl;
    }
}
