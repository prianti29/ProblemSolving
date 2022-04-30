//boy or girl
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string str;
    cin>>str;
    set<char>s;
    for(i=0;i<str.size();i++)
        s.insert(str[i]);
        if(s.size()%2==0)
            cout<<"CHAT WITH HER!";
        else
            cout<<"IGNORE HIM!";
}

