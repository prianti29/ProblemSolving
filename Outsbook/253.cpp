#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,i,j;
    cin>>a>>b>>c;
    i=(a/b);
    j=i*(c-1)+1;
    long long k=i*c;
    cout<<j<<" "<<k<<endl;
}
