#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ll i,j,t,k,n,cnt=0;
    vector<ll>v;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        v.push_back(n);
    }
    for(j=0;j<t-1;j++){
        if(v[j]!=v[j+1]){
            cnt++;
        }
    }
    cout<<cnt+1;
}
