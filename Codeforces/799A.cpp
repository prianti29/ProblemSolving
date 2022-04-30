#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    meow;
    ll a,b,c,d,j;
    double i,sum=0;
    cin>>a>>b>>c>>d;
     i=(ceil(a*1.0/c)*b);
     j=i-b;
    // cout<<a/c+1;
     if(d<j){
        cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }
}


