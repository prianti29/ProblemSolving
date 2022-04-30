#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,i,j,t;
    vector<long long >v;
    vector<long long>v1;

    cin>>t;
    while(t--){
        cin>>a>>b;
       if(a==0&&b==0)
        cout<<"0"<<endl;
       else
        cout<<min(min(a,b),((a+b)/3))<<endl;
    }
}
