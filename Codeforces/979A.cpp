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
    ll m=(n+1);
    if((n+1)%2==0||n==0){
        cout<<m/2<<endl;
    }
    else{
        cout<<m<<endl;
    }
}
