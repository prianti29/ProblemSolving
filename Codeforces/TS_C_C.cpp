#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n,sum=0;
    cin>>n;
    long long arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }
    cout<<abs(sum)<<endl;
    return 0;
}

