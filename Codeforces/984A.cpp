#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,j,n;
    vector<long long>v;
    cin>>t;
    //long long arr[t];
    for(i=0;i<t;i++){
        cin>>n;
        v.push_back(n);

    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    cout<<v[t/2];
}
