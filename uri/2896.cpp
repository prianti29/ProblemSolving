#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,k;
    cin>>t;
    for(i=0;i<=t;i++){
        cin>>n>>k;
        cout<<(n%k)+(n/k)<<endl;
    }

}

