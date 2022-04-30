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
    ll i,t,n;
    cin>>t;
    while(t--){
        ll sum=0;
        ll cnt=0;
        cin>>n;
        ll arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2!=0){
                cnt++;
            }
           // sum+=arr[i];
        }
        if(cnt%2==0&&cnt==n||cnt==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
