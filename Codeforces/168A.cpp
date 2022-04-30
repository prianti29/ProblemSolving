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
    ll a,b,c,ans;
    cin>>a>>b>>c;
    ans=ceil((c*a)/100.0)-b;
    if(ans<0){
        cout<<0<<endl;
    }
    else{
        cout<<ans<<endl;
    }




}
