
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double r,R,i,j;
    while(cin>>r>>R)
    {
        i=3.1416*r*r;
        j=3.1416*R*R;
        cout<<setprecision(2)<<fixed<<j-i<<endl;
    }
}
