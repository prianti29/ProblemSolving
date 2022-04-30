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
    ll a,b;
    cin>>a>>b;
   /* if(a%b==0){
        cout<<a/b<<endl;
    }
    else{
        cout<<a%b<<endl;
    }*/
    cout<<(a+b-1)/a<<endl;
}
