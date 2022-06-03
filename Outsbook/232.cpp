111#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,i,j,div,mult;
    cin>>a>>b;
    i=(a+b)/2;
    j=a-i;
    div=i/j;
    mult=i*j;
    cout<<setprecision(2)<<fixed<<div<<endl<<mult<<endl;

}
