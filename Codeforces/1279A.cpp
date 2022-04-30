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
    ll a,b,t,c,i;
    cin>>t;
    ll arr[3];
    while(t--){
        for( i=0;i<3;i++){
            cin>>arr[i];
        }
        sort(arr,arr+3);
        // cin>>a>>b>>c;
        if((arr[0]+arr[1])+1<arr[2])
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
   }

}
