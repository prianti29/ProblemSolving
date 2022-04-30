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
    ll n,m,t,sum=0;
    cin>>n>>m;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(ll i=0;i<m;i++){
        if(arr[i]<0){
            sum -= arr[i];
        }
    }
    cout<<sum<<endl;
}
