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
    ll a,b,c,sum1,sum2,sum3;
    cin>>a>>b>>c;
    sum1=a+b;
    sum2=b+c;
    sum3=a+c;
    cout<<min(c,sum1)+min(a,sum2)+min(b,sum3)<<endl;


}
