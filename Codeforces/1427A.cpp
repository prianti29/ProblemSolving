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
    cin>>t;
    while(t--){

        cin>>n;
        vector<ll>a(n);
         ll sum=0;
        for(auto &x:a){
            cin>>x;
            sum += x;
        }
        if(sum==0){
            cout<<"NO"<<endl;
        }
        else{
            sort(a.begin(),a.end());
            if(sum>0)
                   reverse(a.begin(),a.end());
            cout<<"YES"<<endl;

            for(auto &x:a){
                cout<<x<<" ";
            }
            cout<<endl;


        }
    }
}
