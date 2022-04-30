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
    ll n,a,b,c,d;
    ll ans1,ans2,ans3;
    ll t;
    cin>>t;
    while(t--){
        cin>>n>>a>>b>>c>>d;
       // ans1=n*((a+b)-(a-b));
       //  cout<<ans1<<endl;
       ans1=n*(a+b);
       ans2=n*(a-b);
      //  ans2=((c+d)-(c-d));
       //  cout<<ans2<<endl;

        if(ans2>(c+d)||ans1<(c-d)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
