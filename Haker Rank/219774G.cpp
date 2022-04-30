
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,i,j,t;
    vector<long long>v;
    vector<long long>v1;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        v.push_back(n);
    }
    for(i=0; i<v.size(); i++)
    {
        v1.push_back(v[i]);
       // cout<<v1[i];
    }
    /*for(i=0; i<v.size(); i++)
    {
        //v1.push_back(v[i]);
        cout<<v1[i];
    }
    cout<<endl;

    for(i=0; i<v.size(); i++)
    {
        //v1.push_back(v[i]);
        cout<<v[i];
    }*/
    reverse(v.begin(),v.end());
    if(v==v1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
