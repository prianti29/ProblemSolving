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
    ll t,x,n,m;
    cin>>t;
    while(t--){
        cin>>x>>n>>m;
        if(x>10){
            while(n--){
                x=x/2+10;
            }
        }
        x=x-(m*10);
        if(x<=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
