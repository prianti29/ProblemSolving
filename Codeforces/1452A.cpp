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
    ll t,x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        if(x>y){
            cout<<x*2-1<<endl;
        }
        else if(x<y){
            cout<<y*2-1<<endl;
        }
        else{
            cout<<x*2<<endl;
        }
    }
}
