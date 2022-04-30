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
    ll t,p,b,a,c;
    cin>>t;
    while(t--){
        cin>>p>>a>>b>>c;
        if(p%a==0||p%b==0||p%c==0){
            cout<<0<<endl;


        }
        else{
            cout<<min(min((a-(p%a)),(b-(p%b))),(c-(p%c)))<<endl;
        }
    }
}
