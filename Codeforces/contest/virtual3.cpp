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
   /* string str,s="hello";
   ll n,cnt=0;
    cin>>str;
    for(ll i=0;i<str.size();i++){
        if(s[cnt]==str[i]){
            cnt++;
        }
    }
    if(cnt==s.size()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }*/
    ll n;
    cin>>n;
    while(n!=1)
   // for(ll i=1;i<=n;i++)
        {
           cout<<n;
    for(ll i=2;i<=n;i++)
        if(n%i==0){
           n /=i;
        break;
            //cout<<i<<" ";
        }
        cout<<" ";
    }
    cout<<n;
}
