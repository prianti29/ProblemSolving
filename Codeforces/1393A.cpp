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
    ll t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<a-(b+1)/2<<" ";
        for(ll i=b+1; i<=a; i++)
        {
            cout<<i<<" ";
        }
        for(ll i=(b+1)/2; i<b; i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
