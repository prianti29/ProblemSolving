#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x1,x2,x3,y1,y2,y3,ans;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3)
    {
        ans= x1 * (y2 - y3) +
            x2 * (y3 - y1) +
            x3 * (y1 - y2);
            if(ans==0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;

    }
}
