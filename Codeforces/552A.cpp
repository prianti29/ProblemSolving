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
    ll t,a,b,c,d,sum=0,ans=0;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        ans=(c-a+1)*(d-b+1);
        sum+=ans;
    }
    cout<<sum<<endl;
}
