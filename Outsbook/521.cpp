#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,i,gcd;
    while(cin>>a>>b)
    {
      i=a*b;
      gcd=__gcd(a,b);
      long long ans=i/gcd;
      cout<<ans<<endl;
    }
}

