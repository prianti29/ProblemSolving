#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,i,j,n;
    vector<long long>v;
    cin>>a>>b;
    for(i=0;i<a;i++)
    {
        cin>>n;
        v.push_back(n);
    }
    for(j=0;j<a;j++)
    {
        cout<<v[(j+b)%a]<<" ";
    }
}
