#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    meow;
   double l,p,q;
    double a,ans;
    cin>>l>>p>>q;
    a=l/(p+q);
    ans=a*p;
    cout<<ans<<endl;
}
