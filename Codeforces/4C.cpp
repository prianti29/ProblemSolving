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
    ll i,n,t;
    string str;
    map<string,ll>m;
    cin>>t;
    while(t--)
    {
        cin>>str;
        if(m[str]==0){
            cout<<"OK"<<endl;
        }

        else{
            cout<<str<<m[str]<<endl;
        }
        m[str]++;
    }
}
