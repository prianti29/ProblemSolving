#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,in=0,out=0,n;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n;
        if(n>=10&&n<=20){
            in++;
        }
        else{
            out++;
        }
    }
    cout<<in<<" "<<"in"<<endl;
    cout<<out<<" "<<"out"<<endl;
}
