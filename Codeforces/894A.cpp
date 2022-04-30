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
    ll cnt=0,i,j,k;
    string str;
    cin>>str;
    for(i=0;i<str.size();i++){
        for(j=i+1;j<str.size();j++){
            for(k=j+1;k<str.size();k++){
                    string ans;
                ans += str[i];
                ans += str[j];
                ans += str[k];
                if(ans=="QAQ")
                    cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}
