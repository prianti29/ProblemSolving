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
    ll a,b,cnt=0;
    //bool true;
    cin>>a>>b;
    for(ll i=1;i*i<=b;i++){
        if(i*(a-i)==b&&a-i>=0){
          //  cout<<"Yes"<<endl;
            //break;
           cnt=1;
            break;
        }
      /* else{
            cout<<"No"<<endl;
            break;
        }*/
    }
    if(cnt){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

}
