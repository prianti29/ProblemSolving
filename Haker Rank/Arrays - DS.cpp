#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,i,t,sum=0;
    vector<long long>v;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        v.push_back(n);
    }
    reverse(v.begin(),v.end());
    for(i=0;i<t;i++)
    {
        cout<<v[i]<<" ";
    }

}
