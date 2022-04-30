#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ll t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a==1||b==1){
            cout<<"YES"<<endl;
        }
        else if(a==2&&b==2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }
}
