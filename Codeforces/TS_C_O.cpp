#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,c=0;
    string str;
    cin>>i>>j;
    cin>>str;
    int len=i+j+1;
    if(str.size()==len&&str[i]=='-')
    {
        for(k=0; k<str.size(); k++)
        {
            if(k!=i)
            {
                if(str[k]=='0'||str[k]=='1'||str[k]=='2'||str[k]=='3'||str[k]=='4'||str[k]=='5'||str[k]=='6'||str[k]=='7'||str[k]=='8'||str[k]=='9')
                {
                    c=1;
                }
                else
                {
                    c=0;
                    break;
                }
            }
        }
        if(c==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    else
        cout<<"No"<<endl;
}
