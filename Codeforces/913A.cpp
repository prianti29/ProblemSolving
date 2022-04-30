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
    cin>>n>>m;
    ll a=pow(2,n);
    //cout<<a<<endl;
    cout<<m%a<<endl;
}
