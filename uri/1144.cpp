#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,f,e;
    cin>>a;
    for(b=1;b<=a;b++)
    {
        c=b*b;
        d=b*b*b;
        cout<<b<<" "<<c<<" "<<d<<endl;
        e=c+1;
        f=d+1;
        cout<<b<<" "<<e<<" "<<f<<endl;
    }
}
