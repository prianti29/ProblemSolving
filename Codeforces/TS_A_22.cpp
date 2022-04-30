#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  i,j,k,total=0;
    char a,b;
    cin>>i>>a>>j>>b>>k;
    if(a=='+'){
            total=i+j;
        if(total==k){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<total<<endl;
        }
    }
    else if(a=='-'){
        total=i-j;
        if(total==k){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<total<<endl;
        }
    }
    else if(a=='*'){
         total=i*j;
        if(total==k)
        {
            cout<<"yes"<<endl;
        }
        else{

            cout<<total<<endl;
        }
    }
}
