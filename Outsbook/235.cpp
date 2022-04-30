#include<bits/stdc++.h>
using namespace std;;
int main()
{
    long long a,i,j,k,l,m,n,o,p,sum=0;
    cin>>a;
    i=a*a;
    //cout<<i<<endl;
    o=i;
    while(i>0)
    {
        j=i%10;
        sum=sum+j;
        i=i/10;

    }
    k=sum*sum;
    //cout<<k<<endl;
    l=o-k;
    //cout<<l<<endl;
    m=l*l;
    cout<<m%10<<endl;



}
