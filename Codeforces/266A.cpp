#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,cnt=0;
    string str;
    cin>>t;
    cin>>str;
    for(i=0;i<str.size();i++)
    {
        //cin>>str;
        if(str[i]==str[i+1])
            cnt++;

    }
    cout<<cnt;
}
