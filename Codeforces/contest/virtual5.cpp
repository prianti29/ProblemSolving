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
    string str;
    ll a,b,cnt=0,n=INT_MIN;
    cin>>a>>b;
    for(ll i=1; i<=b; i++)

    {
        ll ans=0;
        cin>>str;
        for(ll i=0; i<str.size(); i++)
        {
            if(str[i]=='0')
            {
                ans=1;
                cnt++;
               // return 0;
               break;
            }
        }
        if(cnt>=n){
            n=cnt;
        }
        if(ans==0)
       // else
            {
        cnt=0;
        }
    }
    cout<<n<<endl;

}
