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
    ll a,b,c,i,j,t,num,sub;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(c%2==0)
        {
            i=(c/2);
            num=i*a;
            sub=(c-i)*b;

        }
        else
        {
            i=(c/2)+1;
            //cout<<i<<endl;
            num=i*a;
            // cout<<num<<endl;
            sub=(c-i)*b;
            //cout<<sub<<endl;

        }
        cout<<num-sub<<endl;
    }

}
