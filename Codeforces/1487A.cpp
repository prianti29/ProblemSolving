#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;
#define Max 10000000000000000
int main()
{
    meow;
    ll t,n;
    cin>>t;
    while(t--)
    {
         ll m=INT_MAX;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            m=min(m,arr[i]);
        }
        ///cout<<m<<endl;
        ll cnt=0;
        for(ll i=0;i<n;i++){
            if(arr[i]==m){
                cnt++;
            }
        }
        cout<<n-cnt<<endl;

    }
}
