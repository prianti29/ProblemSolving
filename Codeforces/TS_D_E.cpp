#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str1,str2;
    char ch;
    cin>>str>>str1;
    cout<<str.size()<<" "<<str1.size()<<endl;
    str2=str+str1;
    cout<<str2<<endl;
    ch=str[0];
    str[0]=str1[0];
    str1[0]=ch;
    cout<<str<<" "<<str1<<endl;

}
