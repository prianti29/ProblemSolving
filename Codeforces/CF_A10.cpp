//Night at the Museum
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int ans=0,i,j;
    char c='a';
    for(i=0; i<str.size(); i++)
    {
        j=abs(c-str[i]);
        if(j<=13)
            ans=ans+j;
        else
            ans=ans+26-j;
                c=str[i];
    }
    cout<<ans<<endl;

}
