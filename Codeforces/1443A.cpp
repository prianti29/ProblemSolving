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
    ll n,ans,cnt,i,t;
    cin>>t;
    while(t--){
         cin>>n;
    ans=n*4;
    for(i=0;i<n;i++){
        cout<<ans<<" ";
        ans -= 2;
    }
    cout<<endl;
    }

}
