#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i,c1=0,c2=0;
    cin>>str;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='0')
        c1++;
        else if(str[i]=='1')
        c2++;
    }
    cout<<abs(c1-c2)<<endl;
}
