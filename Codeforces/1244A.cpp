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
    ll t,a,b,c,d,m;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d>>m;
        ll ans1=(c+a-1)/c;
        ll ans2=(d+b-1)/d;
        if(ans1+ans2>m){
            cout<<-1<<endl;
        }
        else{
            cout<<ans1<<" "<<ans2<<endl;
        }
            }
}
