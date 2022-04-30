#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef double dl;
typedef unsigned long long int ull;

int main()
{
  ll m,n,i,j,f=0,s=0,t=0,a,b;
  //ll t,a,m,n,i,j,cnt=0;
    cin>>a>>b;
    for(i=1;i<=6;i++){
        m=abs(a-i);
        n=abs(b-i);
        if(m<n){
            f++;
        }
        else if(m>n){
            s++;
        }
        else{
            t++;
        }
    }
    cout<<f<<" "<<t<<" "<<s;

}
