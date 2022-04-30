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
    ll t,a,b,i,j,minn=0,maxx=0;
    cin>>t;
    ll arr[t];
    for(i=0;i<t;i++){
        cin>>arr[i];
        // cout<<arr[i+1]-arr[0]<<" "<<arr[t-1]-arr[0]<<endl;
    }
    cout<<arr[1]-arr[0]<<" "<<arr[t-1]-arr[0]<<endl;
    for(i=1;i<t-1;i++){
        minn=min((arr[i]-arr[i-1]),arr[i+1]-arr[i]);
        maxx=max((arr[i]-arr[0]),(arr[t-1]-arr[i]));
        cout<<minn<<" "<<maxx<<endl;
    }
    cout<<arr[t-1]-arr[t-2]<<" "<<arr[t-1]-arr[0]<<endl;
}
