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
    ll a,b,cnt=0;
    cin>>a>>b;
    for(ll i=1;i<=a;i++){
        if(b%i==0&&b/i<=a){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
