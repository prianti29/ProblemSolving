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
    ll n,d,sum=0,i,a;
    cin>>n>>d;
    for(i=0;i<n;i++){
        cin>>a;
        sum += a;
    }
    if(sum+(10*(n-1))>d){
        cout<<"-1"<<endl;
    }
    else{
        cout<<(d-sum)/5<<endl;
    }
}
