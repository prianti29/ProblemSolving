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
    ll t,a,b,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n<=30){
            cout<<"NO"<<endl;
        }
        else{
                     cout<<"YES"<<endl;
                if(n==36||n==44||n==40){

                cout<<6<<" "<<10<<" "<<15<<" "<<n-31<<endl;
                }
               else{

                cout<<6<<" "<<10<<" "<<14<<" "<<n-30<<endl;
               }
            }
        }
    }

