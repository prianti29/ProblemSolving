#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    string str,str1,str2;
    cin>>str;
    str1=str;//mainstring=42
    reverse(str.begin(),str.end());//reverseString=24
    int k= abs(stoi(str)-stoi(str1));//stoi=> string to int//////abs()=>absolute value
    while(k!=0)
    {
        n=k%10;
        k=k/10;
        sum=sum+n;
    }

    cout<<sum<<endl;
}
