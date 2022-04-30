#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,j,cnt0=0,cnt1=0;
    string str;
    cin>>t>>str;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='z'){
            cnt0++;
        }
        if(str[i]=='n'){
            cnt1++;
        }
    }
    for(j=0;j<cnt1;j++){
        cout<<"1 ";
    }
      for(i=0;i<cnt0;i++){
        cout<<"0 ";
    }
}
