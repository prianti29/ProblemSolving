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
    ll a,b,c,p,q,i,j;
    cin>>a>>b;
    ll arr[a];
    ll arr1[b];
        cin>>p>>q;
    for(i=0;i<a;i++){
        cin>>arr[i];
    }
    for(i=0;i<b;i++){
        cin>>arr1[i];
    }
    if(arr[p-1]<arr1[b-q]){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
