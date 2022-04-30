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
    ll t,a,n,ans;
    cin>>t;
    while(t--){
        cin>>n;
        if(n==1){
            cout<<0<<endl;
        }
        else if(n==2){
            cout<<1<<endl;
        }
        else if(n%2==0 || n==3){
            cout<<2<<endl;
        }
        else{
            cout<<3<<endl;
        }
    }
}
