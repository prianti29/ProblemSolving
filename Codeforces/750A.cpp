#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef double dl;
typedef unsigned long long int ull;

int main()
{
    ll i,p,t;
    cin>>p>>t;
    ll l=240-t;
    ll sum=0;
    ll cnt=0;
    for(i=1;i<=p;i++){
        sum += i*5;
        if(l>=sum){
            cnt++;
        }
        else{
            break;
        }
    }
    cout<<cnt<<endl;
}
