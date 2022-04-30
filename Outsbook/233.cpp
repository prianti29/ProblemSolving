#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,s,l,m,o,n,i,j,k,a,b,c,d,e,f;
    cin>>l>>m>>n>>o>>s;
    a=l+m+n+o;
    x=(a-s)/4;
    b=l-x;
    c=m-x;
    d=n-x;
    e=o-x;
    cout<<"x = "<<x<<endl;
    cout<<"l = "<<b<<endl;
    cout<<"m = "<<c<<endl;
    cout<<"n = "<<d<<endl;
    cout<<"o = "<<e<<endl;
}
