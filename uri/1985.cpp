#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    float a,b,c=0.00;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a==1001)
        {
            c=c+(b*1.50);
        }
        else if(a==1002)
        {
            c=c+(b*2.50);
        }
        else if(a==1003)
        {
            c=c+(b*3.50);
        }
        else if(a==1004)
        {
            c=c+(b*4.50);
        }
        else if(a==1005)
        {
            c=c+(b*5.50);
        }
    }
printf("%.2f\n",c);


}
