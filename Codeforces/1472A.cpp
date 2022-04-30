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
    ll a,b,n,t;

    cin>>t;
    while(t--)
    {
          ll cnt=1;

        cin>>a>>b>>n;
        while(a%2==0 || b%2==0)
        {
            if(a%2==0)
            {
                cnt *= 2;
                a /= 2;
            }
            else if(b%2==0)
            {
                cnt *= 2;
                b /= 2;
            }
        }

        if(cnt>=n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}
