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
    ll t,n,k,a,b,i,j;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(n%2==0){
            cout<<n+2*k<<endl;
            continue;
        }
        else{
                a=0;
            for(i=n;i>=2;i--)


                if(n%i==0)
                    a=i;
            cout<<n+a+2*(k-1)<<endl;
        }
    }
    return 0;

}
