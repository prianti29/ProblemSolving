
#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);
#define rall(a) (a).rbegin(),(a).rend()
#define rall(a) (a).rbegin(),(a).rend()

typedef long long int ll;
typedef unsigned long long int ull;

const double PI = acos(-1);

int main()
{
    ll t,i,a,b;
    //cin>>a>>b;
    cin>>t;
    while(t--){
            cin>>a>>b;
            ll res=(a+b)/2;
            if(b==0){
                  cout<<abs((res-b)-(a-res))<<endl;
            }
            else{
                cout<<abs(a-b)<<endl;
            }

     /*  if(a>b){
        cout<<0<<endl;
    }
    else{
        cout<<abs(a-b)<<endl;
    }*/
    }

}
