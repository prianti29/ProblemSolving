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
    ll m,n,t;
    cin>>t;
    while(t--){
        cin>>m>>n;
        if(m*2<=n){
            cout<<m<<" "<<2*m<<endl;
        }
        else{
            cout<<"-1 -1"<<endl;
        }
    }
}
