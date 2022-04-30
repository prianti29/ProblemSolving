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
    ll t,i,j,n,k,a,b,c;
    ll cnt=0,sum1,sum2;
    cin>>t;
    while(t--)
    {
        ll ans=0;
        sum1=0,sum2=0;
        cin>>n;
        ll arr[n];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            if(i%2==0){
                sum1+=arr[i];
            }
            else{
                sum2+=arr[i];
            }
        }
        //cout<<sum1<<" "<<sum2<<endl;
        ans=sum1-sum2;
        //cout<<ans<<endl;
        if(ans==0){
                for(i=0;i<n;i++)
            cout<<arr[i]<<" ";
        }

    }
}
