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
    if(a+1==b){
        cout<<a<<99<<" "<<b<<"00"<<endl;
    }
    else if(a==b){
        cout<<a<<11<<" "<<b<<12<<endl;
    }
    else if(a==9&&b==1){
        cout<<a<<" "<<b<<0<<endl;
    }
    else{
        cout<<-1<<endl;
    }

}
