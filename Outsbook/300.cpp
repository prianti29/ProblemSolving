#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,a,n,j=0;
    cin>>n;
    while(n!=0)
    {
        i=n%10;
        j=j*10+i;
        n/=10;
    }
    cout<<j;

}
