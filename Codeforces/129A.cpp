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
    ll i,j,t,a,n,cnt=0,cnt1=0;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%2==0){
            cnt++;
        }
        else{
            cnt1++;
        }
    }
    if(cnt1%2==0){
        cout<<cnt<<endl;
    }
    else{
        cout<<cnt1<<endl;
    }
}
