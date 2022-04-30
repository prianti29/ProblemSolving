#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,i,j,cnt=0;
    vector<long long>v;
    for(i=0;i<4;i++)
    {
        cin>>n;
        v.push_back(n);
    }
    sort(v.begin(),v.end());
  //  cout<<v[i]<<endl;
    for(j=0;j<3;j++)
    {
        if(v[j]==v[j+1])
            {
                cnt++;
            }
    }
    cout<<cnt<<endl;
}
