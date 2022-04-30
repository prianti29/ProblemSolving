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
    ll t,n,m;
    ll sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>m;
        for(ll i=0; i<m; i++)
        {
            cin>>n;
            sum+=n;
        }
        sum=(sum-1)/m+1;
    cout<<sum<<endl;
    }

}
