#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i;
    set<char>str1;
    getline(cin,str);
    //cout<<str;
    for(i=0; i<str.size(); i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            char ch=str[i];
            str1.insert(ch);
        }
    }
    cout<<str1.size()<<endl;
}
