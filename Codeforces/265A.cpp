#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ll i,j=0,cnt=0,cnt1=1;
    string str,str1;
    cin>>str>>str1;
    for(i=0; i<str1.size(); i++)
    {
        if(str1[i]==str[j])
        {
              cnt++;
              j++;

        }
    }
    cout<<cnt+1;
}
