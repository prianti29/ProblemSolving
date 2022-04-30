#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n,total=0,rat=0,rabbit=0,frog=0;
    char c;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n>>c;
        total+=n;
        if(c=='C'){
            rabbit+=n;
        }
        if(c=='R'){
            rat+=n;
        }
        if(c=='S'){
            frog+=n;
        }
    }
    cout<<"Total:"<<total<<" "<<"cobaias"<<endl;
    cout<<"Total de coelhos:"<<" "<<rabbit<<endl;
    cout<<"Total de ratos:"<<" "<<rat<<endl;
    cout<<"Total de sapos:"<<" "<<frog<<endl;
    cout<<"Percentual de coelhos:"<<" "<<fixed<<setprecision(2)<<((total*rabbit)/100)<<" "<<"%"<<endl;
    cout<<"Percentual de ratos:"<<" "<<fixed<<setprecision(2)<<((total*rat)/100)<<" "<<"%"<<endl;
    cout<<"Percentual de sapos:"<<" "<<fixed<<setprecision(2)<<((total*frog)/100)<<" "<<"%"<<endl;

}
