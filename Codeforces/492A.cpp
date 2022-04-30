#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define rall(v)   v.rbegin(),v.rend()
#define meow ios::sync_with_stdio(0);cin.tie(0);
#define pi acos(-1)

typedef long long int ll;
typedef unsigned long long int ull;
typedef set<ll>st;
typedef set<char>sc;


int main()
{
    meow;
    ll n,cnt=0,m=1;
    cin>>n;

    while(n>=cnt+m)
    {
        cnt=cnt+m;;
        n=n-cnt;
        m++;
    }
    cout<<m-1;
}
