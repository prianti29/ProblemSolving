#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ll t,a,b,c,x,y,z,i,j;
   ll n[3];
    vector<ll>v;
    cin>>t;
    while(t--){
            for(i=0;i<3;i++){
                cin>>n[i];
              // v.push_back(n);
            }
       // sort(v.begin(),v.end());
       sort(n,n+3);

     /*   x=max(v[0],v[1]);
        y=max(v[0],v[2]);
        z=max(v[1],v[2]);*/
       // cout<<x <<" "<<y<< " "<<x <<" " <<endl;
        if(n[2]!=n[1]){
           cout<<"NO"<<endl;
        }
        else{
             cout<<"YES"<<endl;
            cout<<n[0]<<" "<<n[0]<<" "<<n[2]<<endl;
        }
       // v.clear();
    }
}
