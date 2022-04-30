#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int len;
    int lastdigit;
    while(cin>>str)
    {
       len=str.size();
       lastdigit=str[len-1]-'0';
       if(lastdigit%5==0)
        {
          cout<<"YES"<<endl;
        }
        else{
            cout<<"Lol"<<endl;
        }
    }
}
