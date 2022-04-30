#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n,t=0,fact;
    cin>>t;
    while(t--){
            fact=1;
        cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<fact<<endl;
    }
}
