#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,i,j;
    while(cin>>a>>b)
    {
        i=b/a;
        j=i/365;
        cout<<setprecision(3)<<fixed<<j<<" taka"<<endl;
    }
}

