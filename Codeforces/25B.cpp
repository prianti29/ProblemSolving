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
    ll n,i;
    string str;
    cin>>n;
    cin>>str;
    /*if(n<4){
        cout<<str<<endl'
    }
    else if(n==4){
        cout<<str[0]<<str[1]<<"-"<<str[2]<<str[2];
    }*/
    for( i=0;i<n;i++){
        if(i%2 && i<n-(n%2)-2)
            cout<<"-";

    }
    cout<<str[i];





}
