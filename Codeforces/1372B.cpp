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
    ll i,t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=2;i<=sqrt(n)+1;i++){
            if(n%i==0){
                ll a=n/i;
                cout<<a<<" "<<n-a<<endl;
                break;
                //continue;
            }
        }
        if(n%i!=0)
        cout<<"1 "<<n-1<<endl;
    }
}
