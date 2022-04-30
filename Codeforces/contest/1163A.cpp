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
    ll a,b,c;
    cin>>a>>b;
    if(b==0){
        cout<<1<<endl;
    }
    else if(a==b){
        cout<<0<<endl;
    }
    else if(a%b==0){
        cout<<b<<endl;
    }
    else if(a/2>=b){
        cout<<b<<endl;
    }
    else if(a/2<b){
        cout<<a-b<<endl;
    }
}
