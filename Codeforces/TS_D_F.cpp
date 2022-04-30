#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,k,sum=0;
    string str;
    cin>>str;
    for(j=0; j<str.size(); j++)
    {
        k=str[j]-'0';
        sum=sum+k;
    }
    cout<<sum<<endl;

}

