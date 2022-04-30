#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,i,j;
    cin>>a>>b>>c>>d;
    i=a*b;
    j=(a-2*c)*(b-2*d);
    long long ans=i-j-(4*c*d);
    cout<<ans<<endl;
}
