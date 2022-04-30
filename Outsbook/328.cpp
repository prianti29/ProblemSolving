#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,i,k,l;
    while(cin>>a)
    {
        b=a*4;
        i=a*b;
        //j=i/2;
        cout<<setprecision(2)<<fixed<<"Area of Rectangle: "<<i<<endl;
        cout<<setprecision(0)<<fixed<<"Area of Triangle: "<<ceil(i/2)<<endl;
    }
}
