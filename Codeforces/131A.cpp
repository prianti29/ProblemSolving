#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    string str;
    ll i,j,k,cnt=0,cnt1=0;
    cin>>str;
    for(int i=1; i<str.size(); i++)
    {
        // if(str[i]>='a'&&str[i]<='z')
        if(islower(str[i]))
        {
            cnt++;
        }
        //putchar(toupper(str[0]));
    }
    for(int i=0; i<str.size(); i++)
    {
        if(isupper(str[i]))
        {
            cnt1++;
        }
    }
    // cout<<str;
    // if(str[0]>='a'&&str[0]<='z'&&cnt==0)
    if(islower(str[0])&&cnt==0)
    {
        str[0]=toupper(str[0]);

        for(int i=1; i<str.size(); i++)
        {
            str[i]=tolower(str[i]);
        }
        cout<<str;
        return 0;
    }
    if(cnt1==str.size())
    {
        for(int i=0; i<str.size(); i++)
        {
            str[i]=tolower(str[i]);
        }
        cout<<str;
    }
    else
    {
        cout<<str;
    }
    // cout<<str;
}
