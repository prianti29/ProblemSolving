#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ll i,j,t,k,n,cnt=0,sum1=0,sum2=0;
    cin>>t;
    ll arr[t];
    vector<ll>v;
    for(i=0; i<t; i++)
    {
        cin>>arr[i];
        //v.push_back(n);
    }
   // sort(arr,arr+t);
   ll a=0,b=t-1;
    for(i=0; i<t; i++)
    {
        if(i%2==0)
        {
            sum1+=max(arr[a],arr[b]);
        }
        else
        {
            sum2+=max(arr[a],arr[b]);
        }
        if(arr[a]>arr[b]){
            a++;
        }
        else{
            b--;
        }
    }
    cout<<sum1<<" "<<sum2;
}
