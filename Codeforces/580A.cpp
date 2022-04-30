#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

const double PI = acos(-1);

int main()
{
    meow;
    ll t,i,j,cnt=0,n=0;
    cin>>t;
    ll arr[t];
    for(i=0;i<t;i++){
        cin>>arr[i];
        if(arr[i]>=arr[i-1]){
            cnt++;
            n=max(n,cnt);
        }
        else{
            cnt=0;
        }
    }
    cout<<n+1<<endl;
}
