//Police Recruits
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,n,p=0,ans=0;
    cin>>t;
    while(t--)
    {
        cin>>a;
        if(a==-1){
            if(p>0){
                p--;
            }
            else{
                ans++;
            }
        }
        else
            p=p+a;
    }
    cout<<ans<<endl;
}
