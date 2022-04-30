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
    ll a,b,n;
    ll t;
    cin>>t;
    while(t--){
         cin>>a>>b;
    ll i,sum=0;
    for(i=0;i<a;i++){
            cin>>n;
        sum += n;
    }
    if(sum==b){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }

}
