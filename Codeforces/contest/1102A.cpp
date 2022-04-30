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
    ll n;
    cin>>n;
    ll sum=(n*(n+1))/2;
    if(sum%2==0){
        cout<<0<<endl;
    }
    else{
        cout<<1<<endl;

    }
}
