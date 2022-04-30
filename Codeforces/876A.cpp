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
    ll a,b,c,n;
    cin>>n>>a>>b>>c;
    if(n==1){
        cout<<0<<endl;
    }
    else{
       /* ll i=a+b;
        ll j=a+c;
        ll k=b+c;
        cout<<min(min(i,j),k)<<endl;*/
        if(c<a&&c<b){
            cout<<min(a,b)+(n-2)*c<<endl;
        }
        else{
            cout<<(n-1)*min(a,b)<<endl;
        }
    }
}
