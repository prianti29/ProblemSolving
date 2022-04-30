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
    ll a;
    ll t,i,k,j;
    ll sum=0;
    cin>>t;
    ll arr[t];
    for(i=0;i<t;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum%2==0){
        cout<<sum<<endl;
    }
    else{
            sort(arr,arr+t);
        for(i=0;i<t;i++){
                if(arr[i]%2==1){
                    sum-=arr[i];
               break;
              // return 0;
                }
        }
         cout<<sum<<endl;
    }


}
