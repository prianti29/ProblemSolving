/*        ?
        ??????
       ________
      | _   _  |
      ||_| |_| |     ____
      |   |    |    | |
      |   __   |  __| |
      |________| |____|


*/

#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef double dl;
typedef unsigned long long int ull;

int main()
{
    meow;

    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    ll dp[n+1];
    dp[0]=0;
    ll x,y,z;
    for(ll i=1;i<=n;i++){
        x=INT_MIN,y=INT_MIN,z=INT_MIN;
        if(i>=a){
            x=dp[i-a];
        }
        if(i>=b){
            y=dp[i-b];
        }
        if(i>=c){
            z=dp[i-c];
        }
        dp[i]=1+max(z,max(x,y));
    }
    cout<<dp[n];
}

