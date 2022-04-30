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
  /*  string str;
    cin>>str;
    cout<<(str.size()+1)*25+1<<endl;*/
    ll t;
    ll a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        ll ans=b-a;
        ll ans2=c+ans;
        cout<<ans2<<endl;
    }

}
