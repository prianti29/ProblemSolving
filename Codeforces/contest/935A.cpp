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
    ll n;
    cin>>n;
    ll cnt=0;
    for(ll i=1;i<n;i++){
        if(n%i==0){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
