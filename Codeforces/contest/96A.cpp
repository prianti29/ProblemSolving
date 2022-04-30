#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    meow;
    ll i,j,k,cnt=0;
    string str;
    cin>>str;
    for(i=0; i<str.size()-1; i++)
    {
        if(str[i]==str[i+1])
        {
            cnt++;
        }
        else
            cnt=0;
        if(cnt>5)
        {
            cout<<"YES"<<endl;
            //break;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
