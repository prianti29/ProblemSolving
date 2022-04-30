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
    ll a,b,i,j,m,n;
    cin>>a;
    if(a>=0){
        cout<<a<<endl;
    }
    else{
        m=a/10;
        i=a/100*10;
        n=i+(a%10);
        if(m>n){
            cout<<m;
        }
        else{
            cout<<n;
        }
    }
}
