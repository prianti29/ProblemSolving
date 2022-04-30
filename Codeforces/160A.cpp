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
    ll i,j,k,n,a;
    cin>>n;
    vector<ll>v;
   // ll arr[n];
    ll sum1=0,sum2=0,cnt=0;
    for(i=0;i<n;i++)
    {
        cin>>a;
        //sum1+=arr[i];
        v.push_back(a);
        sum1+=v[i];
    }
    sum1=sum1/2;
   // sort(arr,arr+n);
   sort(all(v));
    for(j=n-1;j>=0;j--)
    {
        sum2+=v[j];
        cnt++;
        if(sum1<sum2){
            break;
        }
    }
    cout<<cnt;
}
