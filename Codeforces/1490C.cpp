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
    ll t,n;
    cin>>t;
    while(t--)
    {
        ll num,tem;
        bool cnt=true;
        cin>>n;
        for(ll i=1; i*i*i<=n; i++)
        {
            num=n-(i*i*i);
            if(num==0)
            {
                break;
            }
            tem=cbrt(num);
            if(num==(tem*tem*tem))
            {
                cout<<"YES"<<endl;
                cnt=false;
                break;
            }
        }
        if(cnt)
        cout<<"NO"<<endl;

    }
}
