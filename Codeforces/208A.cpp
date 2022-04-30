#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;


 int main()
 {
     meow;
     string str;
     ll i;
     cin>>str;
     for(i=0;i<str.size();i++){
         //   i=i+2;
        if(str[i]=='W'&&str[i+1]=='U'&&str[i+2]=='B'){
           i=i+2;
            cout<<" ";
        }
        else{
            cout<<str[i];
        }
     }
 }
