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
    ll t,a,n;
    ll i;
    cin>>t;
    while(t--)
    {
        cin>>a>>n;
        ll arr[a];
        for(i=0; i<a; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        if(arr[0]+arr[1]<=n)
        {
            cout<<"YES"<<endl;
        }
        else if(arr[a-1]<=n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

}
