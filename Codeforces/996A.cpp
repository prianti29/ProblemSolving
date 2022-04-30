#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,cnt=0;
    cin>>a;
    while(a>0)
    {
        if(a%100==0)
        {
            a=a-100;
            cnt++;
        }
        else if(a%20==0)
        {
            a=a-20;
            cnt++;
        }
        else if(a%10==0)
        {
            a=a-10;
            cnt++;

        }
        else if(a%5==0)
        {
            a=a-5;
            cnt++;
        }

        else if(a%1==0)
        {
            a=a-1;
            cnt++;

        }
    }
    cout<<cnt;
}
