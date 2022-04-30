#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    long long P=d;
    long long D=c*b*a;
    long long C=d*f*D;
    long long P1=d+e;
    long long D1=(D*d)/P1;
    cout<<"Person : "<<P<<endl;
    cout<<"Days   : "<<D<<" Days"<<endl;
    cout<<"Charge : "<<C<<" Taka"<<endl;
    cout<<endl;
    cout<<"Person : "<<P1<<endl;
    cout<<"Days   : "<<D1<<" Days"<<endl;
    cout<<"Charge : "<<C<<" Taka"<<endl;
}
