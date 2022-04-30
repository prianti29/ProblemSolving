#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef double dl;
typedef unsigned long long int ull;

int main()
{
    ll a,i,j,m,n,cnt=0;
    vector<ll>v;
    cin>>m>>n;
    for(i=0;i<m;i++)
    {
     cin>>a;
     v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(i=0;i<m-1;i++){
        if(v[i+1]-v[i]>cnt){
            cnt=v[i+1]-v[i];
        }
    }
    dl x=v[0];
    dl y=(dl)cnt/2;
    dl ans=max(x,y);
    dl z=n-v[m-1];
    ans=max(z,ans);
    cout<<setprecision(10)<<fixed<<ans<<endl;

}
