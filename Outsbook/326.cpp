#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,i,j;
    while(cin>>a>>b>>c)
    {
        i=a*b;
        j=(i*c)/100;
        cout<<i+j<<" Points"<<endl;
    }
}
