#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    meow;
    ll n,m,i,j,ans;
    cin>>n;
    if(n==0){
        cout<<1<<endl;
    }
    else{
        // m=pow(1378,n);
     //cout<<m;
     if(n%4==3)
     cout<<2<<endl;
     else if(n%4==1){
        cout<<8<<endl;
     }
     else if(n%4==2){
        cout<<4<<endl;
     }
     else if(n%4==0){
        cout<<6<<endl;
     }
    }

}
