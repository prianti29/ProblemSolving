#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    meow;
    ll a,b,c,d,n,i,cnt=0,sum=0;
    cin>>a>>b>>c;
    for(i=0;i<a;i++){
        cin>>n;
        if(n<=b){
            sum+=n;
        }
        if(sum>c){
            cnt++;
            sum=0;
        }
       // sum=0;
    }
    cout<<cnt;
}
