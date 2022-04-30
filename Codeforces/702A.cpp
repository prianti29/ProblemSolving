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
    ll i,n,t,a,b,c,ans=0,cnt=1;
    cin>>t;
    ll arr[t];
    for(i=0;i<t;i++){
        cin>>arr[i];
    }
    for(i=1;i<t;i++){
        if(arr[i]>arr[i-1])
            cnt++;
        else{
            ans=max(ans,cnt);
            cnt=1;
        }
    }
ans=max(ans,cnt);
cout<<ans<<endl;

}
