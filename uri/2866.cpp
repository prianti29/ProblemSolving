#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string str,str1;
    long long t;
    cin>>t;
    while(t--)
    {
        cin>>str;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]>='a'&&str[i]<='z')
            {
                str1=str1+str[i];
                ///reverse(str.begin(),str.end());
            }

            /*string str2=str[]
            else
                str[i]++;*/
        }
       // cout<<str1;
        reverse(str1.begin(),str1.end());
        cout<<str1<<endl;
        str1="";
    }
}

