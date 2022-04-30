#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef double dl;
typedef unsigned long long int ull;

int main()
{
    meow;
    ll t,i,j,n,cnt1=0,cnt2=0;
    vector<ll>v;
    string str;
    cin>>t;
    cin>>str;
    for(i=0;i<str.size();i++){
        /*cin>>n;
        v.push_back(n);*/
        if(str[i]=='1'){
            cnt1++;
        }
        else{
            cnt2++;
        }
    }
    /*for(i=0;i<t;i++){

    }*/
    cout<<abs(cnt1-cnt2);
}
