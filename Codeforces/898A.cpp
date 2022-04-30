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
    if(n%10==0){
        cout<<n;
        return 0;
    }
    else{
        if(n%10>5){
            cout<<n+(10-(n%10))<<endl;
        }
        else{
            cout<<n-(n%10)<<endl;
        }
    }
}
