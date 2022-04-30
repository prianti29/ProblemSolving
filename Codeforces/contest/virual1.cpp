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
    ll a,b,c,i,j,n;
   // ll arr[a];
    ll t,sum=0,cnt;
    string str="abcdefghijklmnopqrstuvwxyz";
    string str1;
   // cnt=0;
    cin>>t;
    while(t--){
             cnt=1;

        /*cin>>n;
        ll ans=(n-1)/2;
        cout<<ans<<endl;*/
        cin>>a>>b>>c;
        for(i=0;i<a;i++){
          /*  str1+=str[i%c];
            cout<<str1;*/
            cout<<str[cnt];
            if(cnt==c){
                   // return 0;
               // break;
               cnt=0;
            }

            cnt++;
        }
        cout<<endl;
    }
}
