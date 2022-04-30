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

    ll t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
       /* if(a==b)
        {
            ll n=a*b;
            if(n>=c)
            {
                if(n%2==0)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
        }
        if(b%2==0&&a>c &&b>c)
        {
            cout<<"YES"<<endl;

        }
        if(a>0&&b>0&&c==1)
        {
            cout<<"YES"<<endl;

        }
        if(a==1&&b==c )
        cout<<"YES"<<endl;*/
        if(a%2==0||b%2==0||c==1&&a>0&&b>0){
            cout<<"YES"<<endl;
        }
      else
        cout<<"NO"<<endl;


    }

}
