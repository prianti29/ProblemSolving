#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ll t,a,b,i,j,m,n,cnt;
    cin>>t;
    set<ll>s;

    while(t--)
        cnt=0;
    ll cnt1=0;
    {
        cin>>a>>b;
        for(i=0; i<a; i++)
        {
            cin>>m;
            s.insert(m);
        }
        for(j=0; j<b; j++)
        {
            cin>>m;
            if(s.count(m)==1)
            {
                cnt++;
                cnt1=m;
                break;
            }
        }
        if(cnt==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl<<"1 "<<cnt1<<endl;
        }
    }
}
/**  while(t--)
    {set<long long>s;
    set<long long>ss1;
    d=0;f=0;
        cin>>n>>m;
        l(i,0,n)
        {
            cin>>a;
            s.in(a);
        }
        l(i,0,m)
        {
            cin>>a;
            if(s.count(a)==1)
            {
            d++;
               f=a;
               // break;
            }
        }
        if(d==0)
        {
            cout<<"NO"<<endl;
        }
        else{
             cout<<"YES"<<endl;
                cout<<1<<" "<<f<<endl;

        }
    }
}**/
