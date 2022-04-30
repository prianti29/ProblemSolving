#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,i,sum=0;
    cin>>a>>b;
    long long arr[b];
    for(i=0; i<b; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<b; i++)
    {
        sum=sum+arr[i];
    }
    if((sum)>a)
        cout<<"-1"<<endl;
    else
        cout<<a-sum<<endl;
}


