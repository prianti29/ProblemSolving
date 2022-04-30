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

const int inf = 1e9;
const ll mod = 1000000007;


int main()
{
    meow;
    ll n,m,x;
    ll t;
    cin>>t;
    while(t--){
        ll n, m, x;
		cin >>n>>m>>x;
		ll a=x/n;
		ll b=x%n;
		if (b == 0)
			cout << a+(n-1)*m<<endl;
		else
			cout << a+1+(b-1)*m<<endl;
    }
}
