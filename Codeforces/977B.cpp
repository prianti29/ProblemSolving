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
    ll n,a=0,cnt=0;
    string str,ans;
    cin>>n>>str;
    for(ll i=0; i<str.size(); i++)
    {
        cnt=0;
        for(ll j=0; j<str.size(); j++)
        {
           // cnt++;
            if(str[i]==str[j]&&str[i+1]==str[j+1])
            {
                cnt++;
                if(a<cnt){
                    a=cnt;
                    ans=string(1,str[i])+string(1,str[i+1]);
                }

            }
        }
    }
    cout<<ans<<endl;
}
