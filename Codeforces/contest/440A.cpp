
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
    ll n,i,j;
    cin>>n;
    ll arr[n];
    for(i=0;i<n-1;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n-1);
    for(j=0;j<n;j++){
        if(arr[j]==j+1){
            continue;
        }
        else{
            cout<<j+1<<endl;
            return 0;        }
    }
}
