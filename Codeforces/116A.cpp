#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;

int main()
{
   meow;
   ll t,m,n;
   ll cnt=0;
   ll max=0;
   cin>>t;
   while(t--){
    cin>>m>>n;
     cnt=cnt-m+n;
     if(max<cnt){
        max=cnt;
     }
   }
   cout<<max;
}
