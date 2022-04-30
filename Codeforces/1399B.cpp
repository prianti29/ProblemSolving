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
    while(t--)
    {
        cin>>n;
    ll arr1[n],arr2[n];

        for(ll i=0; i<n; i++)
        {
            cin>>arr1[i];
        }
        ll arr1min=*min_element(arr1,arr1+n);
        for(ll i=0; i<n; i++)
        {
            cin>>arr2[i];
        }
        ll arr2min=*min_element(arr2,arr2+n);
        ll ans=0;
        for(ll j=0; j<n; j++)
        {
            ans += max(arr1[j]-arr1min,arr2[j]-arr2min);
        }
        cout<<ans<<endl;
    }



}
