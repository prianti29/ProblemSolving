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
    if(n%2==0){
            ll m=pow(2,(n/2));
        cout<<m<<endl;
    }
    else{
        cout<<0<<endl;
    }
}
