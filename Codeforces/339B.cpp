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
    cin>>m>>n;
    ll arr[n];
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    ll cnt=arr[0]-1;
    for(ll i=0; i<n-1; i++)
    {
       /* if(arr[i]>arr[i+1])
        {
            cnt += m-(arr[i]-arr[i+1]);
        }*/
        if(arr[i]<arr[i+1])
        {
            cnt +=(arr[i+1]-arr[i]);
        }
    }
    cout<<cnt<<endl;
}
