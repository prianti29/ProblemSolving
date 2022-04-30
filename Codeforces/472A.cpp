#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef double dl;
typedef unsigned long long int ull;

int main()
{
    ll ans,i,j,n;
    cin>>n;
    if(n%2==0){
       // i=n/2;
        j=n-4;
        cout<<4<<" "<<j;
    }
    else{
       // i=n/2+1;
        j=n-9;
        cout<<9<<" "<<j;
    }

}
