#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef double dl;
typedef unsigned long long int ull;

int main()

{
    meow;
    ll i,j,t,m,n,a,b;
    cin>>t;
    ll arr[t];
    for(i=1;i<=t;i++){
        cin>>arr[i];
    }
    cin>>m;
    for(i=1;i<=m;i++){
        cin>>a>>b;
        if(a>1){
            arr[a-1]+=b-1;
        }
        if(a<t){
            arr[a+1]+=arr[a]-b;
        }

        //cout<<arr[i]<<endl;
        arr[a]=0;
    }
    for(i=1;i<=t;i++)
    {
        cout<<arr[i]<<endl;
    }

}
