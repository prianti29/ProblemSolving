#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,ans;
    cin>>a;
    ans=((a+(1/a))*(a+(1/a))*(a+(1/a))*(a+(1/a)));
    cout<<setprecision(3)<<fixed<<ans<<endl;
}
