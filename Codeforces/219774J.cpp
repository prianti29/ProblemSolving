#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,n,j,k,cnt=1;
    vector<long long >v;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        v.push_back(n);
    }
    sort(v.begin(),v.end());
    k=v[0];
    for(i=1;i<t;i++){
        if(k==v[i])
        {
            cnt++;
        }
    }
   //long long minn=*min_element(v.begin(),v.end());
   if(cnt%2==1){
    cout<<"Lucky"<<endl;
   }
   else
    cout<<"Unlucky"<<endl;
}
