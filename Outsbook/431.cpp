#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,i,j,b;
    while(cin>>a>>b)
    {
        i=(b-(a*2))/2;
        j=a-i;
        cout<<j<<" "<<i<<endl;
    }
}
