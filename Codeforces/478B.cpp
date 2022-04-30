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
    ll n,k;
      cin >> n >> k;
      ll mn=k*(n/k)*(n/k-1)/2+(n/k)*(n%k);
      ll mx=(((n-k+1)*(n-k))/2);
	cout <<mn<<" "<<mx;

}
