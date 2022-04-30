#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;

int main()
{
    ll n,a,ma=0,mi=100,maxi,mini;
    vector<ll>v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
        if(v[i]>ma){
            ma=v[i];
            maxi=i;
        }
         if(v[i]<=mi){
            mi=v[i];
            mini=i;
        }
    }
    if(maxi>mini){
        mini++;
    }
    cout<<maxi+(n-1)-mini<<endl;

}
