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
    ll t,m,n,minn,max1,max2;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        max1=max(m*2,n);
        max2=max(m,n*2);
        minn=min(max1,max2);
        cout<<minn*minn<<endl;
    }
}
