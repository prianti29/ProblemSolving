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
    ll t,n,i,a;
    cin>>t;
    while(t--){
        cin>>n;
        for(i=1;i<=n;i++){
            cin>>a;
            a=abs(a);
            if(i%2==0){
                a=-a;
            }
            cout<<a<<" ";
        }
        cout<<endl;
    }
}
