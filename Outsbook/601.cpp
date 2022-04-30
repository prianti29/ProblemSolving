#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,t,n,i,j,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+i);
         for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
