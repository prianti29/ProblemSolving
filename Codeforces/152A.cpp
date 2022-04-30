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
    ll a,b,c;
    ll t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(c%3==0)
        {
            cout<<a<<endl;
        }
        else if(c%3==1)
        {
            cout<<b<<endl;
        }
        else if(c%3==2)
        {
            cout<<(a^b)<<endl;
        }
    }
}
