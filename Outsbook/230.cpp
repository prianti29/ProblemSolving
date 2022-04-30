#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,i,j;
    cin>>a>>b>>c;
    i=(b-a)/c;
    j=(a*c)+(0.5*i*c*c);
    cout<<setprecision(1)<<fixed<<i<<endl<<j<<endl;
}
