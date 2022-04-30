#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,a,mn=0,mx=0,cnt=0;
    vector<long long>v;
    cin>>a;
    for(i=0; i<a; i++)
    {
        long long n;
        cin>>n;
        v.push_back(n);
    }
    sort(v.begin(),v.end());
    for(i=0; i<a-1; i++)
    {
        if(v[i]==v[i+1]&&i==a-2){
             cnt++;
                mx=max(mx,cnt);
        }
        else{
                cnt++;
             mx=max(mx,cnt);
        cnt=0;
        }
    }
    cout<<mx;
}
