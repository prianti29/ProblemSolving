#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ll a,b,c,d;
    ll m,n,o,p;
    /*cin>>a;
    if(a==1)
    cout<<0<<endl;
    else{
        cout<<1<<endl;
    }*/
    cin>>a>>b>>c>>d;
    m=a*c;
    n=a*d;
    o=b*c;
    p=b*d;
    cout<<max(max(max(m,n),o),p)<<endl;

}
