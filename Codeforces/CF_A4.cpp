//Team
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0,i,temp,a,b,c;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        temp=(a+b+c)/2;
        ans=ans+temp;
    }
    cout<<ans<<endl;

}
