#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ll i,n,sum=0;
    cin>>n;
    ll arr[n];
    for( i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=1; i<=n; i++)
    {
        cout<<arr[i]+arr[i+1]<<" ";
    }
   //cout<<arr[i];
}
