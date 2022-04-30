#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j;
    while(cin>>i>>j)
    {
        long long k=i-1;
        long long ans=k%j;
        if(ans<=j)
        cout<<ans<<endl;
    }
}
