#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

const double PI = acos(-1);

int main()
{
    meow;
    long long a,b;
    string str1,str2;
    cin>>str1>>str2;
   // a=str1.size();
    //b=str2.size();
    if(str1==str2){
        cout<<-1<<endl;
    }
    else{
        cout<<max(str1.size(),str2.size())  <<endl;
    }
    /*if(a==b){
        cout<<"-1"<<endl;
    }*/
}
