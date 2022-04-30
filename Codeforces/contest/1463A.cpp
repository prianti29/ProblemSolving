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
    ll a,b,c,t;
    cin>>t;

    while(t--)
    {
        cin>>a>>b>>c;
        ll mn=min(min(a,b),c);
        if((a+b+c)%9 == 0 && mn>= (a+b+c)/9)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

}

