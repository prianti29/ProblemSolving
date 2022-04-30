#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,a,n,j=0,sub,sum=0,k;
    cin>>n;
    long long temp=n;
    while(n!=0)
    {
        i=n%10;
        j=j*10+i;
        n/=10;
    }
    sub=abs(temp-j);
    while(sub!=0){
        k=sub%10;
        sum=sum+k;
        sub=sub/10;
    }
    cout<<sum;
}

