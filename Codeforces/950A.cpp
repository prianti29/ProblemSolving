#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,ans;
    cin>>i>>j>>k;
    while(k>0)
    {
        if(i<j)
            i++;
        else
            j++;
        k--;
    }
    ans=min(i,j)*2;
    cout<<ans<<endl;


}
