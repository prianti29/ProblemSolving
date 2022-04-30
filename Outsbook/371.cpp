#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,i,j,k;
    while(cin>>a>>b>>c)
    {
        i=(a+b+c)/2;
        j=sqrt(i*((i-a)*(i-b)*(i-c)));
        cout<<setprecision(2)<<fixed<<j<<endl;
    }
}
