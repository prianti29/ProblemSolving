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
    ll n;
    cin>>n;
     ll arr[n][n];
    for(ll i=0;i<1;i++){
        for(ll j=1;j<n;j++){
            arr[i][j]=1;
        }
    }
      for(ll i=0;i<n;i++){
        for(ll j=0;j<1;j++){
            arr[i][j]=1;
        }
    }
      for(ll i=1;i<n;i++){
        for(ll j=1;j<n;j++){
            arr[i][j]=arr[i-1][j]+arr[i][j-1];
        }
    }
    cout<<arr[n-1][n-1];
}
