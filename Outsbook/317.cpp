#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,i,j,k,l,m,n,o;
    while(cin>>a>>b)
    {
        k=0;
        i=a/4.0;
        j=i*b;
        k=j+(i*(b/2.0))+(i*(b/3.0))+(i*(b/5.0));
        //j=a/4;
        cout<<setprecision(2)<<fixed<<k<<endl;
    }
}
