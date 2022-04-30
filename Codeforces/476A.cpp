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
    ll m,n;
    cin>>m>>n;
    ll a=(m+1)/2;
    ll b=(a-1)/n;
    ll c=(b+1)*n;
     if(c<=m){
        cout<<c<<endl;
     }
     else{
        cout<<-1<<endl;
     }
}
