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
    /*ll t,i,a,b,n,cnt=0;
     /// cin>>t;
      //while(t--){
        cin>>n;
        if(n%2==0){
            cout<<n-8<<" "<<8<<endl;
        }
        else{
            cout<<n-9<<" "<<9<<endl;
        }
       /* a=n/2;
        b=n-a;
        cout<<a<<" "<<b<<endl;*/
    //  }*/
    ll t,c,i,j,ans=0;
    double a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        ans=abs(a-b);
        if(ans%10!=0)
        {
            cout<<setprecision(0)<<fixed<<(ans+10)/10<<endl;
        }
        else
        {
            cout<<setprecision(0)<<fixed<<ans/10<<endl;
        }
    }
}
