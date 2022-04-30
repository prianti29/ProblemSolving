#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef double dl;
typedef unsigned long long int ull;

int main()
{
    meow;
    ll i,a,b,cnt=0;
    pair<ll,ll>p[10000];
    cin>>a>>b;
    for(i=0; i<b; i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    /* for(i=0;i<b;i++){
         cout<<p[i].first<<p[i].second;
     }*/
    sort(p,p+b);
    for(i=0; i<b; i++)
    {
        if(a<=p[i].first){
                cnt=1;
            break;

        }
        else{
            a += p[i].second;
        }
    }
    if(cnt==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
