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
    ll cnt,r,g,b,w;
    ll t;
    cin>> t;
    while(t--){
            cnt=0;
        cin>>r>>g>>b>>w;
    if(r%2==1){
        cnt++;
    }
    if(g%2==1){
        cnt++;
    }
    if(b%2==1){
        cnt++;
    }
    if(w%2==1){
        cnt++;
    }
    //cout<<cnt;
    if(r==0||g==0||b==0){
        if(cnt==0||cnt==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        if(cnt==2){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    }

}
