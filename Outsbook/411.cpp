#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    while(cin>>a>>b)
    {
        if(a>b)
            cout<<a<<" > "<<b<<endl;
        else if(a<b)
            cout<<a<<" < "<<b<<endl;
        else
            cout<<a<<" = "<<b<<endl;
    }
}
