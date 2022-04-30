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
    ll n,m;
    cin>>n>>m;
    if(n==0&&m!=0){
        cout<<"Impossible"<<endl;
        return 0;
    }
    else if(m>=n&&m!=0){
        cout<<(n+(m-n))<<" "<<n+(m-1)<<endl;
        return 0;
            }
    else if(m>0){
        cout<<n<<" "<<n+m-1<<endl;
        return 0;
    }

            else{
                cout<<n<<" "<<n<<endl;
                return 0;
            }
}
