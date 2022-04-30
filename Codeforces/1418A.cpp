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
    ll a,n,i,j,x,y,k,t;
 cin>>t;
    while(t--){

      cin>>x>>y>>k;

        long long ans1= y*k+k;
        long long ans = (ans1-2)/(x-1)+1;
        cout<<ans+k<<endl;
    }


}
