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
    ll t;
    ll l1,l2,r1,r2;
    cin>>t;
    while(t--){
            ll m,n;
        cin>>l1>>r1>>l2>>r2;
        if(l1<=l2){
             m=l1;
             n=r2;
        }
        else{
             n=l2;
             m=r1;
        }
        cout<<m<<" "<<n<<endl;
    }
}
