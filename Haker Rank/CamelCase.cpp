#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    long long i,n,cnt=1;
    cin>>str;
    for(i=0;i<str.size();i++){
        if(str[i]>=65&&str[i]<=90){
            cnt++;
        }
    }
    cout<<cnt<<endl;

}
