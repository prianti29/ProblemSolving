#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

const double PI = acos(-1);

int main()
{
    meow;
    ll i,t,a,b,n;
    vector<ll>v;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        v.push_back(n);
    }
    ll cnt=0;
    sort(v.begin(),v.end());
    for(i=0;i<t;i++){
        if(v[0]<v[i]&&v[t-1]>v[i]){
            cnt++;
        }
    }
    cout<<cnt<<endl;

}
