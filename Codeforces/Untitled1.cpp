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
    ll a,b,c;
    cin>>a>>b>>c;
    if(a==b&& b==c){
        cout<<"Equilateral Triangle"<<endl;
    }
    else if(a==b||b==c||a==c){
        cout<<"Isosceles Triangle"<<endl;
    }
    else{
        cout<<"Bad Triangle"<<endl;
    }

}
