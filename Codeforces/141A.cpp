#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;

int main()
{
    meow;
    ll i,t,j,cnt=0;
    string str1,str2,str3;
    cin>>str1>>str2>>str3;
    string con=str1+str2;
    sort(all(str3));
    sort(all(con));
    //for(i=0;i<con.size();i++){
        if(con==str3){
            cout<<"YES"<<endl;
           // break;
          // return 0;
        }
        else{
            cout<<"NO"<<endl;
           // break;
          // return 0;
        }
   // }
}
