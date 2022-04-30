#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ll t,i,ans;
    ll a,b,c,d;
    ll arr[5];
    for(i=0;i<4;i++){
        cin>>arr[i];
    }
    sort(arr,arr+4);
    cout<<abs(arr[3]-arr[0])<<" "<<abs(arr[3]-arr[1])<<" "<<abs(arr[3]-arr[2])<<endl;
}
