#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int d[n];
        d[0]=1;
        long long sum=d[0];
        for(i=1;i<n;i++)
        {
            if(arr[i-1]<=arr[i])
                d[i]=d[i-1]+1;
            else
                d[i]=1;
            sum=sum+d[i];
        }
        cout<<sum<<endl;
    }

}
