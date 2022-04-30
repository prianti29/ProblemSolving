#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,t,cnt=0;
    cin>>t;
    while(t--)
    {
       cin>>i>>j;
       if(j>i)
            cnt=1;
    }
    if(cnt==1)
        cout<<"Happy Alex"<<endl;
    else
        cout<<"Poor Alex"<<endl;
}
