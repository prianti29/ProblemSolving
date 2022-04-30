#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ll a,b,t,n,cnt1=0,cnt2=0;
    vector<ll>v;
    cin>>a>>b;
    for(int i=0;i<a;i++){
        cin>>n;
        v.push_back(n);
        if(v[i]<=b){
            cnt1++;
        }
        else{
            cnt2+=2;
        }
    }
    cout<<cnt1+cnt2<<endl;
}
