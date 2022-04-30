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
    ll t,j;
    double i,a,b,m,n;
    cin>>t;
    while(t--){
        /*cin>>n>>m;
        a=n-2;
        if(a<=0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<fixed<<setprecision(0)<<ceil(a/m)+1<<endl;
        }*/
        cin>>n;
        cout<<fixed<<setprecision(0)<<ceil((sqrt(n)-1)*2)<<endl;
    }
}
