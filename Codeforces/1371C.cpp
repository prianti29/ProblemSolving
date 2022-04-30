#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,n,m;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>m>>n;
        if(m+n>a+b)
        {
            cout<<"NO"<<endl;
            continue;
        }
      else  if(min(a,b)<n)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
            cout<<"YES"<<endl;

    }
}
