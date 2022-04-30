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
    ll i,j,t,n,cnt=0;
    vector<ll>v;
    for(i=0;i<4;i++){
        cin>>n;
        v.push_back(n);
    }
    string str;
    cin>>str;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='1'){
            cnt+=v[0];
        }
        if(str[i]=='2'){
            cnt+=v[1];
        }
        if(str[i]=='3'){
            cnt+=v[2];
        }
        if(str[i]=='4'){
            cnt+=v[3];
        }
    }
    cout<<cnt;

}
