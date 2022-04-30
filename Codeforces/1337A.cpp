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
    ll t,n,i;
    cin>>t;
    ll arr[5];
    vector<ll>v;
    while(t--){
       for(i=0; i<4; i++)
    {
        cin>>arr[i];
        //v.push_back(n);
    }
    sort(arr,arr+4);
    cout<<arr[1]<<" "<<arr[2]<<" "<<arr[2]<<endl;
    }
}
