#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,b,c=1,d=4;
    cin>>t;
    for(i=1;i<=t;i++){
        for(b=c;b<=d;b++){
            if(b%4==0){
                cout<<"PUM"<<endl;
            }
            else{
                cout<<b<<" ";
            }
        }
        c=c+4;
        d=d+4;
    }
}
