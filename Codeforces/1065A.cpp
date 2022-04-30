#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,s,a,b,c,a1,a2,a3,ans;
    cin>>t;
    while(t--)
    {
        cin>>s>>a>>b>>c;
        //a1=(s/a)*a*b*c;
        a1=s/c;
        a2=a1/a;
        //a3=s-a1*a2;
        ans=a2*b+a1;
          cout<<ans<<endl;
    }

}
