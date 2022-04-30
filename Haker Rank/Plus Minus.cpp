#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a;
    double p=0,n=0,z=0;
    cin>>t;
    long long j;
    j=t;
    while(t--)
    {
        cin>>a;
        if(a>0)
            p++;
        else if(a<0)
            n++;
        else
            z++;
    }
   // cout<<t<<endl;
    cout<<setprecision(6)<<fixed<<p/j<<endl;
    cout<<setprecision(6)<<fixed<<n/j<<endl;
    cout<<setprecision(6)<<fixed<<z/j<<endl;
}
