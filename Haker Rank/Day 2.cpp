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
    double a,b,c;
    double tip,tax;
    cin>>a>>b>>c;
    tip=a*(b/100);
    tax=a*(c/100);
    ll ans=a+tip+tax;
    cout<<ans<<endl;
}
