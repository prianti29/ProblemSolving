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
    ll n;
    cin>>n;
    ll a=n-1;
    while(a>4){
        a-=5;
        a/=2;
    }
    if(a==0){
        cout<<"Sheldon"<<endl;
    }
    else if(a==1){
        cout<<"Leonard"<<endl;
    }
    else if(a==2){
        cout<<"Penny"<<endl;
    }
    else if(a==3){
        cout<<"Rajesh"<<endl;
    }
    else if(a==4){
        cout<<"Howard"<<endl;
    }

}
