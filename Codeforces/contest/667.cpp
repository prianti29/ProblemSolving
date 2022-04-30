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
    ll i,j,t,sum,cnt=0,a,b,c;
    string str,str1;
    vector<ll>v;
    cin>>t;
    while(t--){
        cin>>a>>b;
        sum=abs(a-b);
        if(sum==0)
            cout<<0<<endl;
            else{
                if(sum%10==0)
                {
                    cout<<sum/10<<endl;
                }
                else{
                    cout<<sum/10+1<<endl;
                }
            }


    }
}
