
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
    ll i,j;
    ll arr [4];
    for(i=0;i<4;i++){
        cin>>arr[i];
    }
    sort(arr,arr+i);

    if((arr[0]+arr[3]==arr[1]+arr[2])||(arr[0]+arr[1]+arr[2])==arr[3]){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
