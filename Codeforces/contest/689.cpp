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
    ll a,b,t,n,c;

    cin>>t;
   /* while(t--){
        cin>>a>>b;
            for(ll i=1;i<a;i++){
            cout<<"a";
        }
        cout<<"a"<<endl;
    }*/
while(t--){
       string str="abc";
        cin>>a>>b;
        c=1;
            for(ll i=1;i<=a;i++){
            if(i%c==0)
               cout<<str[c-1];
           if(c==3)
              c=0;
          c++;
        }
        cout<<endl;;
    }
}


