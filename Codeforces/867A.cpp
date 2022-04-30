#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,t,n,cnt1=0,cnt2=0;
    string str;
    cin>>t>>str;
    for(i=0;i<str.size()-1;i++)
    {
        if(str[i]=='F'&&str[i+1]=='S'){
            cnt1++;
        }
        if(str[i]=='S'&&str[i+1]=='F'){
            cnt2++;
        }
    }
    if(cnt2>cnt1){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
