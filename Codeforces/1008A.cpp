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
    string str;
    ll i,j;
    cin>>str;
    for(i=0;i<str.size();i++){
        if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='n'){
            if(str[i+1]!='a' && str[i+1]!='e' && str[i+1]!='i' && str[i+1]!='o' && str[i+1]!='u'){
                cout<<"NO"<<endl;
               return 0;
               //break;
            }
        }
       /* else{
            cout<<"YES"<<endl;
            break;
        }*/
    }
    cout<<"YES"<<endl;
   // break;
   return 0;
}
