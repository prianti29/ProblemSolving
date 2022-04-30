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
    ll i;
    string str1,str2,str3,str4,str5,str6;
    cin>>str1>>str2>>str3>>str4>>str5>>str6;
    string str7=str2+str3+str4+str5+str6;
    for(i=0;i<str7.size();i++){
        if(str1[0]==str7[i]||str1[1]==str7[i]){
            cout<<"YES"<<endl;
            return 0;
        }
        /*else{
            cout<<"NO"<<endl;
            return 0;
        }*/
    }
    cout<<"NO"<<endl;
}
