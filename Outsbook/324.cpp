#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,x,y,z,i,j,l,m,n,o;
    char c;
    while(cin>>a>>b>>c>>x>>y>>z)
    {
        i=a-(a*(b/100));
        j=x+y+z;
        double  k=j/i;
        cout<<"Monthly Save = "<<setprecision(2)<<fixed<<i<<endl;
        cout<<"Total Cost = "<<setprecision(2)<<fixed<<j<<endl;
        cout<<"Minimum Time = "<<setprecision(0)<<fixed<<ceil(k)<<" Months"<<endl;
    }
}
