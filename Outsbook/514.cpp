
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,i,j,diff;
    while(cin>>n&&n!=0)
    {
        vector<long long>v;
        vector<long long>v1;
        long long arr[n];
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);

        }
        cout<<*max_element(v.begin(),v.end())<<endl;
    }
}

