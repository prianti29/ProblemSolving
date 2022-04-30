#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define rall(v)   v.rbegin(),v.rend()
#define meow ios::sync_with_stdio(0);cin.tie(0);
#define pi acos(-1)

typedef long long int ll;
typedef unsigned long long int ull;
typedef set<ll>st;
typedef set<char>sc;


int main()
{
    meow;
    ll a,b,ans,cnt=0;
    cin>>a>>b;
    if(b%a != 0){
        cout<<"-1"<<endl;
        return 0;
    }
    b /= a;
    while(b%2==0){
        b /= 2;
        cnt++;
    }
     while(b%3==0){
        b /= 3;
        cnt++;
    }
    if(b>1){
        cout<<"-1"<<endl;
    }
    else{
        cout<<cnt<<endl;
    }


}
