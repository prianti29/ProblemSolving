#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i,t;
    int counter=1;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,str);
        for(i=0; i<str.size(); i++)
        {
            if(str[i]>='A'&&str[i]<='Z')
            {
                str[i]=str[i]+32;
            }
        }
        cout<<"Case "<<counter<<": "<<str<<endl;
        counter++;
    }

}

