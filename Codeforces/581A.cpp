#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef double dl;
typedef unsigned long long int ull;

int main()
{
    meow;
    ll i,j;
    cin>>i>>j;
    if(i>j){
        cout<<j<<" "<<(i-j)/2<<endl;
    }
    else{
        cout<<i<<" "<<(j-i)/2<<endl;
    }
}
