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
    ll t,a,n,i;
    cin>>t;
    while(t--){
            ll sum=0,sum1=0,power=0;
        cin>>n;
        sum=(n*(n+1))/2;
        for(i=0;true;i++){
            power=pow(2,i);
            if(power<=n){
                sum1+=power*2;
            }
            else{
                break;
            }
        }
        cout<<sum-sum1<<endl;
    }
}
