#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,j,k,sum=0;
    vector<long long>v;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>j;
        v.push_back(j);
        sum+=v[i];
    }
    cout<<abs(sum);
}
