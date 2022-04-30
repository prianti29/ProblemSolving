#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b;
    if(b>a){
        swap(a,b);
    }

        c=7-a;
    if(c==6){
        cout<<"1/1";
    }
    if(c%2==0){
        cout<<c/2<<"/"<<6/2;
    }
    if(c%3==0){
        cout<<c/3<<"/"<<6/3;
    }
    else if(c!=0){
        cout<<c<<"/"<<6;
    }
    if(c==0){
        cout<<"0/1";
    }
}
