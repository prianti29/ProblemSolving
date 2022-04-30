#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define PB push_back
#define fasti0() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fasti0();
    ll a,b,c,n,i,k,j,t,cnt=0;
    ll arr,arr1,arr2;

    vector<ll>v;
    vector<ll>v1;
    set<ll>s;

    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        i=a/c;
        j=a%b;
        k=(i*a)-j;
        cout<<abs(k)<<endl;

      /*  i=(c-b)/a;
        j=i*a+b;*/

        cout<<abs(j)<<endl;
    }
}
