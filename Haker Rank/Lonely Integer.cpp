#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,n,t,j,i,sum=0,cnt;
        long long res=0;
    vector<long long>v;
    cin>>t;
    long long arr[t];
    for(i=0; i<t; i++)
    {
        cin>>n;
        v.push_back(n);
         res^=v[i];
    }
    cout<<res;
}
