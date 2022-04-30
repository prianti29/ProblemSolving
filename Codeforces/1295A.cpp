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
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll ans=n/2;
        if(n%2==1)
        {
            cout<<7;
            for(i=1; i<ans; i++)
            {
                cout<<1;
            }
        }

        else
        {
            for(i=0; i<ans; i++)
            {
                cout<<1;
            }
        }
        cout<<endl;
    }
}
