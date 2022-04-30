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
    ll t,n,a=0,b=0,c=0;
    cin>>t;
   for(ll i=0;i<t;i++){
        cin>>n;
        if(n==1){
            a++;
        }
        else if(n==2){
            b++;
        }
        else if(n==3){
            c++;
        }
    }
    ll mx=max(max(a,b),c);
        cout<<abs(t-mx)<<endl;

}
