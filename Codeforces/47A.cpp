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
    ll a;
    cin>>a;
    /* if(a%2==0){
         cout<<"NO"<<endl;
     }
     else{
         cout<<"YES"<<endl;
     } */
    for(ll i=1; i<=a; i++)
    {
        if((i*(i+1))/2==a)
     {
        cout<<"YES"<<endl;
        return 0;
     }
    }
cout<<"NO"<<endl;
}
