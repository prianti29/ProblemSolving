#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i;

    cin>>t;
    while(t--)
    {
        bool isprime=true;
       cin>>n ;
       for(i=2;i<=n/2;++i){
        if(n%i==0){
            isprime=false;
            break;
        }
       }
       if(isprime){
        cout<<"Prime"<<endl;
       }
       else{
       cout<<"Not"<<endl;
       }
    }
}
