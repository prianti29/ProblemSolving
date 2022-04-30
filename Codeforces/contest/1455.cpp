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
    ll t,n;
    string str;
    cin>>t;
    while(t--)
    {
        /*   cin>>str;
           cout<<str.size()<<endl;*/
        cin>>n;
        if(n==1)
        {
            n==n;
        }
        else if(n%2==0)
        {
            n=n+1;
        }
        else if(n%2==1)
        {
            n=n-1;
        }
        cout<<n<<endl;
    }
}
