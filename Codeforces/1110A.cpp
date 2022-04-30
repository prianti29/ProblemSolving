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
    ll a,b,i,j,m,n,c;
    cin>>a>>b;
    ll arr[b];
    m=0;
    n=0;
    for(i=0;i<b;i++){
        cin>>arr[i];
        c=arr[i]+n;
        m=c/b;
        n=c%b;

        cout<<m<<" ";
    }
}
