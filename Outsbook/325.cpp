#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,i,j;
    while(cin>>a)
    {
        i=pow((a+(1/a)),4);
        cout<<setprecision(3)<<fixed<<i<<endl;
    }
}
