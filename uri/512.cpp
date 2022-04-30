#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i,n;
    cin>>n;
    long long arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    reverse(arr,arr+n);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
