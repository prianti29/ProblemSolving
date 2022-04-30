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
    ll t;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>str;
        ll sz=str.size();

            if(str[sz-1]=='o')
            {
                cout<<"FILIPINO"<<endl;

            }
            else if(str[sz-1]=='u'){
                cout<<"JAPANESE"<<endl;
            }
            else if(str[sz-1]=='a'){
                cout<<"KOREAN"<<endl;
            }

    }
}
