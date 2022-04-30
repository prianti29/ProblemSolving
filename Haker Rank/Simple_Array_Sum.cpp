#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t,sum=0;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum<<endl;
}
