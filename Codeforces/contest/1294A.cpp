
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
    ll a,b,c,n,t;
    cin>>t;
    while(t--){
       cin>>a>>b>>c>>n;
    ll sum=a+b+c+n;
    ll div=(a+b+c+n)/3;

    if(sum%3==0&&a<=div&&b<=div&&c<=div){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }

}
