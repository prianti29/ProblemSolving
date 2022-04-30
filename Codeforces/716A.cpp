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
    ll a,b,c,n;
    ll cnt=0;
    vector<ll>v;
    cin>>a>>b;

    for(ll i=0; i<a; i++)
    {
        cin>>n;
        v.push_back(n);
        if(i>0)
        {
            if(v[i]-v[i-1]<=b)
            {
                cnt++;
            }
            else
            {
                cnt=0;
            }
        }
    }
    cout<<cnt+1<<endl;

}
