#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str1;
    cin>>str;
    str1=str;
    reverse(str.begin(),str.end());
    if(str1==str){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
