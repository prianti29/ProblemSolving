#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,i,n,c,d,j,k;
    long long arr[4];
    vector<long long>v;
    while(cin>>a>>b>>c>>d)
    {
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        v.push_back(d);
        sort(v.begin(),v.end());
        cout<<v[2]+v[3]<<endl;
        v.clear();
    }
}
