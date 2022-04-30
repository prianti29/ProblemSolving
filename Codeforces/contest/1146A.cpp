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
    string str;
    ll i,j,k;
    cin>>str;
    ll s=str.size();
   // cout<<s<<endl;
    ll a=count(str.begin(),str.end(),'a');
   // cout<<a<<endl;
    cout<<min(s,(a*2-1))<<endl;
}
