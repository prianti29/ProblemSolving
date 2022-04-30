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
    ll t,a,b,c,i,j,x,y;
    cin>>t;
    while(t--)
    {

        cin>>x>>y;
         cin>>a>>b;
         if(b>2*a){
            b=2*a;
         }
         if(x>y){
            swap(x,y);
         }
         cout<<a*(y-x)+b*x<<endl;

    }
}
