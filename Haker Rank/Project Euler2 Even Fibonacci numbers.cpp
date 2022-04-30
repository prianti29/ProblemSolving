#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,f1=1,f2=1,tem=0,sum=0;
    cin>>t;
    while(t--){
        cin>>n;
        while(f1<n){
            if(f1%2==0)
                sum+=f1;
            tem=f2;
            f2=f2+f1;
            f1=tem;
        }
        cout<<sum<<endl;
    }
}
