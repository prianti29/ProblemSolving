#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ll a,b,c,d,maxx,minn;
    cin>>a>>b>>c>>d;
    cout<<max(abs(a-c),abs(b-d))<<endl;
    /*if(a>=0||b>=0||c>=0||d>=0)
    {
        minn=min(a,b);
        maxx=max(c,d);
    }
    else
    {
        minn=min(a,b);
        maxx=min(c,d);
    }
    cout<<abs(maxx-minn)<<endl;*/

}
