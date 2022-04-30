#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int d,vf,vg,tw=12;
    double tf,tg,x;
    while(cin>>d>>vf>>vg)
    {
        x=(double)sqrt((tw*tw)+(d*d));
        tf=(double)tw/vf;
        tg=(double)x/vg;
        if(tg>tf)
            cout<<"N"<<endl;
        else
            cout<<"S"<<endl;
    }
}
