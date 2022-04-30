#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0;
    string str1="hello",str;
    cin>>str;
    for(i=0;i<str.size();i++)
    {
        if(str[i]==str1[j])
            j++;
    }
    if(j==str1.size())
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


}
