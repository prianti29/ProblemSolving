#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,w,i,j,ans;
    while(cin>>h)
    {
        w=h*1.5;
        i=h*h;
        j=w*w;
        ans=sqrt(i+j);
        cout<<setprecision(2)<<fixed<<ans<<endl;
    }
}
