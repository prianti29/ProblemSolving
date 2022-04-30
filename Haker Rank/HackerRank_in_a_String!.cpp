#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,t;
    string str1,str2;
    cin>>t;
    while(t--)
    {
        j=0;
        cin>>str1;
        str2="hackerrank";
        for(i=0; i<str1.size(); i++)
        {
            if(str1[i]==str2[j])
                j++;
        }
        if(j==str2.size())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
  //str1="";
}
