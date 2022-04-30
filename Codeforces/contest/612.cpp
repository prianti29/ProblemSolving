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
    ll sum,t,n,i,j,k,ans,cnt=0;
    cin>>t;
    while(t--){
            sum=0;
        cin>>n;
        ll arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
         //if(sum%2!=0)
             ans=(sum-1)/n+1;

       /*else{
        ans=sum/n;
       }*/

        cout<<ans<<endl;
    }
}
