#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,n,i,c;
    set<long long>s;
    cin>>a>>b;
    while(b--)
    {
        cin>>n;
        long long c;
        for( i=0;i<n;i++)
        {
            cin>>c;
            s.insert(c);
        }
    }
    cout<<a-s.size()<<endl;
}
