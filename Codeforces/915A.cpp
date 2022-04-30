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
    ll n,a,b,i,t;
    cin>>a>>b;
    vector<ll>v;
    for(i=0;i<a;i++){
        cin>>n;
        v.push_back(n);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(i=0;i<a;i++){
        if(b%v[i]==0){
            cout<<b/v[i];
            return 0;
        }
    }

}
