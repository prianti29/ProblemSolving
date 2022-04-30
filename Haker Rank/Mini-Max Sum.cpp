#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,mn=0,mx=0;
    vector<long long>v;
    for(i=0; i<5; i++)
    {
        long long n;
        cin>>n;
        v.push_back(n);
    }
    sort(v.begin(),v.end());
    for(i=1;i<=4;i++)
        mx+=v[i];
    for(i=0;i<4;i++)
        mn+=v[i];
    cout<<mn<<" "<<mx<<endl;
}
