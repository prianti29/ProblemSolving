
#include <bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main ()
{
    int n, k, t;
    cin>>n>>k>>t;

    int a1=min(n,t);
    int a2=max(0, t-k);

    cout<<a1-a2;
}
