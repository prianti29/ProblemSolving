#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while(cin>>str)
    {
        if(str=="Saturday")
            cout<<"Tuesday"<<endl;
        else if(str=="Sunday")
            cout<<"Wednesday"<<endl;
        else if(str=="Monday")
            cout<<"Thursday"<<endl;
        else if(str=="Tuesday")
            cout<<"Friday"<<endl;
        else if(str=="Wednesday")
            cout<<"Saturday"<<endl;
        else if(str=="Thursday")
            cout<<"Sunday"<<endl;
        else if(str=="Friday")
            cout<<"Monday"<<endl;

    }

    return 0;
}

