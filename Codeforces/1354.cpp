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
    ll t,a,b,c,d;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        if(a<=b){
            cout<<b<<endl;
           continue;
        }
       else if(c<=d){
            cout<<-1<<endl;
            //continue;
        }

        else{
            ll m=c-d;
            ll n=a-b;
            if(n%m==0){
                cout<<b+c*(n/m)<<endl;
            }
            else{
                cout<<b+c*(n/m+1)<<endl;
            }
        }
    }
}
