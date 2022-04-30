#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i;
    cin>>str;
    int len=str.size();
    for(i=0;i<len;i++)
    {
        if(str[i]==',')
        {
            cout<<" ";
        }
        else
            cout<<str[i];
    }
}
