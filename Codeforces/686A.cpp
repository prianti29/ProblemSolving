
#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    meow;
    ll a,b,i,n,cnt=0;
    char c;
         cin>>a>>b;
    while(a--)
   // for(i=0;i<a;i++)
    {
        // cnt=0;
        cin>>c>>n;
        if(c=='+')
        {
            b+=n;
        }
        else if(b>=n)
        {
            b-=n;
        }
        else
        {
            cnt++;
        }
    }
    cout<<b<<" "<<cnt;
}
