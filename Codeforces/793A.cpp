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
    ll a,b,c,m,n;
    cin>>m>>n;
    ll arr[m];
    for(ll i=0; i<m; i++)
    {
        cin>>arr[i];
    }
    if(m==1)
    {
        cout<<0<<endl;
        return 0;
    }
    sort(arr,arr+m);
    ll sum=0;
    for(ll i=1; i<m; i++)
    {
        ll ans=arr[i]-arr[0];
        if(ans%n==0)
        {
            sum+=ans/n;
        }
        else
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<sum<<endl;
}
