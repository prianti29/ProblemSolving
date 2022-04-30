#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    meow;
    ll n,k,a,t;

    cin>>t;
    while(t--)
    {
        ll sum=0;
        vector<ll>v,v1;
        cin>>n>>k;

        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        ///sort(all(v));
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v1.push_back(a);
        }
        ///sort(all(v1));
        for(ll i=0; i<k; i++)
        {
            sort(all(v));
            sort(all(v1));
            if(v[0]<v1[n-1])
            {
                swap(v[0],v1[n-1]);
            }
            else{
                break;
            }
        }
        for(ll i=0; i<n; i++)
        {
            sum += v[i];
        }
        cout<<sum<<endl;
    }



}
