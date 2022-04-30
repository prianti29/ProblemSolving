#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;


int main()
{
    ll t,n;
    ll sum=0,m=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        sum+=n;
        m=max(m,n);
    }
    cout<<(m*t)-sum<<endl;
}
