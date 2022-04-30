#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

#define F first
#define S second

int main()
{
    meow;
    ll i,j,k,t;
    cin>>t;
    vector<pair<string,string>> pv(t);

    for(i=0;i<t;i++){
        cin>>pv[i].F>>pv[i].S;
    }
    sort(pv.begin(),pv.end());
    k=unique(pv.begin(),pv.end())-pv.begin();
    cout<<k<<endl;


}
