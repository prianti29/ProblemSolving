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
    ll i,j,k;
    char c;
    string str1;
    string str="qwertyuiopasdfghjkl;zxcvbnm,./";
    cin>>c;
    cin>>str1;
    if(c=='R'){
        for(i=0;i<str1.size();i++){
            for(j=0;j<31;j++){
                if(str1[i]==str[j]){
                    cout<<str[j-1];
                }
            }
        }
        cout<<endl;
    }
    if(c=='L'){
         for(i=0;i<str1.size();i++){
            for(j=0;j<31;j++){
                if(str1[i]==str[j]){
                    cout<<str[j+1];
                }
            }
         }
         cout<<endl;
    }
}
