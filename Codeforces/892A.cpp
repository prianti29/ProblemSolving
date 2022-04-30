#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,n,sum=0;
    cin>>n;
    long long a[n];
    long long b[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    for(i=0; i<n; i++)
    {
        cin>>b[i];
    }
    /* for(i=0;i<n;i++)
     {
         cout<<a[i]<<endl;
     }
     for(i=0;i<n;i++)
     {
         cout<<b[i]<<endl;
     }*/
    sort(b,b+n);
    if(b[n-1]+b[n-2]>=sum)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


}
