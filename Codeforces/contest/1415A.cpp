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
    ll n,m,r,c;
    ll t;
    cin>>t;
    while(t--){
          cin>>n>>m>>r>>c;
    cout<<max(r-1,n-r)+ max(c-1,m-c)<<endl;
    }

}
