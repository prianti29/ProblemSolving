#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ll a,b,i,j,k;
    cin>>a>>b;
    for(i=0;i<b;i++){
        if(a%10==0){
            a=a/10;
        }
        else{
            a--;
        }
    }
    cout<<a<<endl;
}
