#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

bool pm(string str)
{
    string str1;
     str1=str;
    reverse(str.begin(),str.end());

    if(str1==str){
        return true;
    }
    else{
       return false;
    }
}

int main()
{
    meow;
    ll i,t,j,cnt=0;
    string str,str2="";
    cin>>str;
    if(pm(str)){
        cout<<"YES"<<endl;
    }
    else{
        for(i=str.size()-1;i>0;i--){
            if(str[i]=='0'){
                str2+=str[i];
            }
            else{
                break;
            }
        }
        str2+=str;
        if(pm(str2)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
