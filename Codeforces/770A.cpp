
#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

const double PI = acos(-1);

int main()
{
    ll i,j,n,m;
    string str="abcdefghijklmnopqrstuvwxyz";
    string str1;

    cin>>n>>m;
    //cout<<i%j;
    for(i=0;i<n;i++){
        str1+=str[i];
    }
    cout<<str1;
}
