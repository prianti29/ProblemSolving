#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,k,n,i,sum=0;
    string str;
    cin>>n>>str;
    for(j=0; j<str.size(); j++)
    {
        k=str[j]-'0';
        sum=sum+k;
    }
    cout<<sum<<endl;

}
