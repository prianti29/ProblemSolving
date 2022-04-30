#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef double dl;
typedef unsigned long long int ull;

int main()
{
    meow;
    ll t,a,i,j,k,m,n,o,p;
   // vector<ll>v;
    cin>>t;
    while(t--)
    {
        vector<ll>v;
        cin>>a;

        if(a<=10)
        {
            cout<<1<<endl;
            cout<<a<<endl;
        }
        else
        {
            m=a%10;
            a=a-m;
            n=a%100;
            a=a-n;
            o=a%1000;
            a=a-o;
            /* if(a>0){
                 v.push_back(a);
             }*/
              if(m>0)
            {
                v.push_back(m);
            }
            if(n>0)
            {
                v.push_back(n);
            }
            if(o>0)
            {
                v.push_back(o);
            }
            if(a>0)
            {
                v.push_back(a);
            }
            cout<<v.size()<<endl;
            for(i=0;i<v.size();i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
