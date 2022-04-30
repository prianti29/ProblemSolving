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
    ll c,t,k,i,j,m,n,cnt=0;
    cin>>c;
    cin>>m;
    ll arr[1000];
    for(i=0;i<m;i++){
        cin>>arr[i];
    }
    cin>>n;
    for(i=m;i<m+n;i++){
        cin>>arr[i];
    }
   /* for(j=0;j<n;j++){
        cin>>arr2[j];
    }*/
    sort(arr,arr+(m+n));
    for(i=0;i<m+n;i++){
        if(arr[i]!=arr[i+1]){
            cnt++;
        }
    }
    if(cnt==c){
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }

}
