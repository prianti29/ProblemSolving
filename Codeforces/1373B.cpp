#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define rall(v)   v.rbegin(),v.rend()
#define meow ios::sync_with_stdio(0);cin.tie(0);
#define pi acos(-1)

typedef long long int ll;
typedef unsigned long long int ull;
typedef set<ll>st;
typedef set<char>sc;


int main()
{
    meow;
    ll t;
    string str;
    cin>>t;
    while(t--){
            ll z=0,o=0;
        cin>>str;
        for(ll i=0;i<str.size();i++){
            if(str[i]=='0'){
                z++;
            }
            else{
                o++;
            }
        }
        ll minn=min(z,o);
        if(minn%2==0){
            cout<<"NET"<<endl;
        }
        else{
            cout<<"DA"<<endl;
        }

    }
}
