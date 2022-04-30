#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j,k,i;
    char ch[50],ch1[50];
    cin>>t;
    while(t--)
    {
        cin>>ch>>ch1;
        j=0;
        k=0;
        for(i=0;i<50;i++)
        {
            if(ch[i]=='\0')
            j=1;
            if(ch1[i]=='\0')
                k=1;
            if(j==1&&k==1)
                break;
            if(j==0)
                cout<<ch[i];
            if(k==0)
                cout<<ch1[i];
        }
        cout<<endl;
    }
}
