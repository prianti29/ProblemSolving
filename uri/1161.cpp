#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,fact1,fact2,m,n;
    while(cin>>n>>m){
        fact1=1;
        fact2=1;
        for(i=1;i<=n;i++){
            fact1=fact1*i;
        }
        for(j=1;j<=m;j++){
            fact2=fact2*j;
        }
        cout<<fact1+fact2<<endl;
    }
}
