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
    ll t,ans=0,n;
    cin>>t;
    while(t--){
        cin>>n;
        ans=max(ans,n);
    }
   if(ans>25){
    cout<<ans-25;
   }
   else{
    cout<<0;
   }
}
