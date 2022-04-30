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
    ll n,t;
    cin>>t;
    while(t--){
        cin>>n;
        for(ll i=2; i<10e9; i++){
            ll p=pow(2,i)-1;
            if(n%p==0){
                    cout<<n/p<<endl;
                break;
            }
        }

    }
}
