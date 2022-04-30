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
    ll d,h,v,e;
    double pi=3.1415926535,ans;
    cin>>d>>h>>v>>e;
    ans=(pi*d*d*h/4)/(v-(e*pi*d*d/4));
    if(ans<0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<fixed<<setprecision(12)<<"YES"<<endl<<ans<<endl;
    }

}
