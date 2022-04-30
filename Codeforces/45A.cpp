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
    ll i,j,n;
    string strm[]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    string str;
    cin>>str;
    cin>>n;
    ll cnt=0;
    if(n%12==0){
        cout<<str<<endl;
    }

    else{
        for(i=0;i<12;i++){
            if(strm[i]==str){
              cnt=i;
            }
        }
        ll rem=n%12;
        cout<<strm[(cnt+rem)%12]<<endl;
    }
}
