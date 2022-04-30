#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c;
    while(cin>>a>>b>>c)
    {
        if(c==1)
        {
            cout<<a*b<<" taka wins"<<endl;
        }
        else
            cout<<(b*2)*a<<" taka lose"<<endl;
    }
}
