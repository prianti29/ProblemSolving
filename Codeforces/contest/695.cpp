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
    ll t,a,n;
    string str,str2;
    cin>>t;
    while(t--)
    {
        ll cnt=9;
        cin>>n;
        for(ll i=0;i<n;i++){
           cout<<cnt;
           cnt--;
           if(cnt==1){
            cnt=9;
           }
        }
        cout<<endl;

    }
}
