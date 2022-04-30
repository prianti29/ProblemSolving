#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ll a,i,t,j,k,n=0,m=0;
    cin>>n;

    while(n--)
    {
        set <int>s;
            vector<int>v;
            int m=0,n=0;
            cin>>t;
            for(i=0;i<(t*2);i++)
            {
                cin>>a;
                m=s.size();
                s.insert(a);
                n=s.size();
                if(m!=n)
                {
                    v.push_back(a);
                }
            }
            for(auto x:v)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }


