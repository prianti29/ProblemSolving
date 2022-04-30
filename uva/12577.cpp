#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i=1;
    while(cin>>str&&str!="*")
    {
        if(str=="Hajj")
        {
cout<<"Case "<<i++<<": "<<"Hajj-e-Akbar"<<endl;
        }
        else if(str=="Umrah")
        {
            cout<<"Case "<<i++<<": "<<"Hajj-e-Asghar"<<endl;
        }
    }
}
