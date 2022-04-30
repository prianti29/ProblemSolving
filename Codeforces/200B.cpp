#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,j,n,k,m;
    double sum=0;

    cin>>t;
    long long arr[t];
    for(i=0;i<t;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
  ///  cout<<sum<<endl;;
    double ans=sum/t;
    cout<<setprecision(12)<<fixed<<ans<<endl;
}
