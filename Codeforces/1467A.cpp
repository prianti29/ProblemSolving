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
    ll t,a,n;
    cin>>t;
    while(t--){
        cin>>n;
        for(ll i=0;i<n;i++){
            if(i==0){
                cout<<9;
            }
            else{
                cout<<(7+i)%10 ;
            }
        }
        cout<<endl;
    }
}
