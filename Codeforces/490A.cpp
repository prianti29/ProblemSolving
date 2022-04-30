#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

const double PI = acos(-1);

int main()
{
    meow;
    ll t,i,j,n,minv;
    vector<ll>v1,v2,v3;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        if(n==1){
            v1.push_back(i+1);
        }
        else if(n==2){
            v2.push_back(i+1);
        }
        else{
            v3.push_back(i+1);
        }
    }
    ll a,b,c;
    a=v1.size();
    b=v2.size();
    c=v3.size();
    minv=min({a,b,c});
    cout<<minv<<endl;
    for(i=0;i<minv;i++){
        cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;;
    }
}
