#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,i,temp,sum=0;
    cin>>a>>b>>c;
    for(i=1;i<=c;i++)
    {
        temp=i*a;
        sum= sum+temp;
    }
    if(b<sum)
    {
        cout<<setprecision(0)<<fixed<<sum-b<<endl;

    }
    else
       cout<<"0"<<endl;

}
