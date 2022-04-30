#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,i,j,k;
    while(cin>>a>>b)
    {
        i=a+a;
        j=i/13;
        k=j+13;
        c=pow(k,b);
        cout<<setprecision(3)<<fixed<<c<<endl;
    }
}
