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
    ll t,n,m;
    vector<ll>v;
    cin>>t;
    while(t--){
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            //cin>>m;
            //v.push_back(m);
        }
       //sort(v.begin(),v.end());
       sort(arr,arr+n);
        if(arr[0]==arr[n-1]){
            cout<<n<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
}
