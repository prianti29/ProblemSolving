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
    ll t,n;
    string str;
    cin>>t;
    while(t--)
    {
        ll cnt=0,cnt1=0,sum=0;
        cin>>n;
        cin.ignore();
        cin>>str;
        for(ll i=0; i<str.size(); i++)
        {
            if(str[i]=='(')
            {
                cnt++;
            }
            else
                cnt1++;
            sum = max(sum,cnt1-cnt);
        }
        cout<<sum<<endl;

    }
}
