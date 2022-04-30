#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ll i,j,t,cnt1=0,cnt2=0;
    cin>>t;
    ll a[t],b[t];
    for(i=0;i<t;i++){
        cin>>a[i]>>b[i];
        if(a[i]==b[i]){
            continue;
        }
        if(a[i]>b[i])
            cnt1++;
        else{
            cnt2++;
        }
    }
    if(cnt1==cnt2){
        cout<<"Friendship is magic!^^" <<endl;
    }
    else if(cnt1>cnt2){
        cout<<"Mishka"<<endl;
    }
    else {
        cout<<"Chris"<<endl;
    }


}
