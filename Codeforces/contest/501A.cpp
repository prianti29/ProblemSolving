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
    ll a,b,c,d,m,n,o,p,mn,op;
    cin>>a>>b>>c>>d;
    m=3*a/10;
    n=a-((a/250)*c);
    mn=max(m,n);
    o=3*b/10;
    p=b-((b/250)*d);
    op=max(o,p);
    if(mn<op){
        cout<<"Vasya"<<endl;
    }
    else if(mn>op){
        cout<<"Misha"<<endl;
    }
    else{
        cout<<"Tie"<<endl;
    }

}
