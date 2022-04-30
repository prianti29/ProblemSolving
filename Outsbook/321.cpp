#include<bits/stdc++.h>
using namespace std;
int main()
{
    double r1,r2,r3,i,j,k;
    while(cin>>r1)
    {
        r2=r1/2;
        r3=r2/2;
        i=3.1416*r1*r1;
        j=3.1416*r2*r2;
        k=3.1416*r3*r3;
        cout<<setprecision(2)<<fixed<<i+j+k<<endl;
    }
}
