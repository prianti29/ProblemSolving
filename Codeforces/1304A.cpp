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
    ll cnt,cnt1,t,x,y,a,b;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>a>>b;
        cnt=y-x;
        if(cnt%(a+b)==0){
            cout<<cnt/(a+b)<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}
