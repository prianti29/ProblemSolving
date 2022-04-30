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
    ll n,a=0;
    string str;
    cin>>n>>str;;
    for(ll i=1;a<n;i++){
        a += i;
        cout<<str[a-1];
    }
}
