#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

const double PI = acos(-1);

int main()
{
    ll n;
    cin>>n;
    if(n%2==0){
        cout<<n/2<<endl;
    }
    else{
        cout<<"-"<<n/2+1<<endl;
    }
}
