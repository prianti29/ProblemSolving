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
    ll a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    ll sum=a+b+c+d+e;
    if(sum%5==0){
        cout<<sum/5<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}
