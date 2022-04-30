#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,mina,minb;
    long long a0=0,a1=0,b0=0,b1=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a==0){
            a0++;
        }
        if(a==1){
            a1++;
        }
        if(b==0){
            b0++;
        }
        if(b==1){
            b1++;
        }
    }
    mina=min(a0,a1);
    minb=min(b0,b1);
    cout<<mina+minb<<endl;

}
