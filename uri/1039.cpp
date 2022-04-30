#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int x1,x2,y1,y2,r1,r2;
    float dis;
    while(cin>>r1>>x1>>y1>>r2>>x2>>y2)
    {
        dis = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
        if(r1>=dis+r2)
            cout<<"RICO"<<endl;
        else
            cout<<"MORTO"<<endl;
    }
}
