#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,n,i,cnt=0,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<=sqrt(n);i++)
        {
            if(n%i==0){
                cnt++;
                continue;
            }
        }
        cout<<"Case "<<i<<": "<<cnt<<endl;
    }
}
