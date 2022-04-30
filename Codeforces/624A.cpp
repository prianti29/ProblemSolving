#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;
typedef double dl;


int main()

{
    dl d,l,v1,v2;
    cin>>d>>l>>v1>>v2;
    dl ans=(l-d)/(v1+v2);
    cout<<setprecision(20)<<fixed<<ans<<endl;
}
