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
    ll i,cnt=0;
    string str;
    cin>>str;
    for(i=0;i<str.size();i++){
        if(str[i]=='1'&&str[i+1]=='4'&&str[i+2]=='4'){
            i += 2;
            continue;
        }
        else if(str[i]=='1'&&str[i+1]=='4'){
            i += 1;
            continue;
        }
        else if(str[i]=='1')
            continue;
        else{
            cout<<"NO"<<endl;
            return 0;
        }
        //cout<<"YES"<<endl;
       // return 0;

    }
    cout<<"YES"<<endl;
    return 0;

}
