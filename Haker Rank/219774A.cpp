#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,n,sum=0;
    vector<long long>v;
    cin>>t;
    for(i=1;i<t;i++)
    {
        cin>>n;
        v.push_back(n);
        sum=sum+v[i];
    }
    cout<<sum<<endl;
}
