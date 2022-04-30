#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,i,j;
    double x,y;
    while(cin>>a)
    {
        i=(a*6)/10;
    j=(a*2)/10;
    x=(9/20)*a;
    y=i/2;
    cout<<"L = "<<a<<endl;
    cout<<"W = "<<i<<endl;
    cout<<"R = "<<j<<endl;
    cout<<setprecision(2)<<fixed<<"(X, Y) = ("<<x<<", "<<y<<")"<<endl;
    }
}

