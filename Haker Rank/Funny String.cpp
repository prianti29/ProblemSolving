#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,j,cnt;
    string str,str1,str2;
    cin>>t;
    cin.ignore();
    for(j=0; j<t; j++)
    {
        cnt=0;
        ///getline(cin,str);
        cin>>str;
        str1=str;
        reverse(str.begin(),str.end());

        for(i=0; i<str.size()-1; i++)
        {
            if(abs(str1[i]-str1[i+1])!=abs(str[i]-str[i+1]))
            {
                cout<<"Not Funny"<<endl;
                cnt=1;
                break;
            }
        }
        //cout<<cnt<<endl;
        if(cnt==0)
            cout<<"Funny"<<endl;
    }
}
