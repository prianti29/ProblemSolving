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
    ll n,i,t;
    cin>>t;
    while(t--){
            cin>>n;
    ll arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    ll cnt=0;
    for(i=1;i<=n-1;i++){
        if(arr[i]>=arr[i-1]){
            //cout<<"YES"<<endl;
            cnt=1;
            break;
        }
    }
    if(cnt==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    }

}
