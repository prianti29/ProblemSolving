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
    ll t;
    ll n,m,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll num=n;
        while(n>0)
        {
            m=n%10;
            sum=sum+m;
            n=n/10;
        }
    cout<<__gcd(n,num);


    }
}
