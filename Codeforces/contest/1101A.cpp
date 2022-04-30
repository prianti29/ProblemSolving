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
    ll t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(c<a){
            cout<<c<<endl;
        }
        else{
            cout<<(b/c+1)*c<<endl;
        }
    }
}
