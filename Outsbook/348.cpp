#include<bits/stdc++.h>
using namespace std;
int main()
{
    double w1,w2,w3,h1,h2,h3;
    while(cin>>w1>>w2>>w3>>h1>>h2>>h3)
    {
        double i=w1*h1;
        double j=(w2*h2)+(w3*h3);
        cout<<setprecision(1)<<fixed<<i*2<<" "<<j/2<<endl;
    }

}
