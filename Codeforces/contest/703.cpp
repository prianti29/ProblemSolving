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
    ll t,a=1,d=1,n,p,j,i,m;
    cin>>n>>m;
    ll arr[n],arr1[n];
    for (i = 0; i < n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<int>());
    int med=(m+1)/2;
    cout<<arr[med];
}
