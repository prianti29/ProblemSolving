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
    ll i,t,a,b,cnt1=0,cnt2=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>0){
            cnt1++;
        }
        if(a<0){
            cnt2++;
        }
    }
    if(cnt1<2||cnt2<2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
