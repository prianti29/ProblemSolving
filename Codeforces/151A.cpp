#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  n,k,l,c,d,p,nl,np,a,b;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    a=min((c*d),(p/np));
    b=min(a,(k*l)/nl)/n;
    cout<<b<<endl;

}
