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
    ll a,b,n,t;
    cin>>t;
    while(t--)
    {
        ll sum=0,cnt=0;
        cin>>a>>b>>n;
        while(a<=n && b<=n)
        {
            sum=a+b;
            b=max(a,b);
            a=sum;
            cnt++;
        }
        cout<<cnt<<endl;
    }

}
