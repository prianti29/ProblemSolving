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
        if(n==1||n==2||n==4){
            cout<<-1<<endl;
            //return 0;
            continue;
        }
        if(n%3==0){
            cout<<n/3<<" 0 0"<<endl;
        }
        else if((n-5)%3==0){
            cout<<(n-5)/3<<" 1 0"<<endl;
        }
        else if((n-7)%3==0){
            cout<<(n-7)/3<<" 0 1"<<endl;
        }
    }
}
