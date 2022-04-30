#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int ara[5],n;
    cin>>ara[0];
    n=ara[0];
    for(int i=1;i<4;i++)
    {
        cin>>ara[i];
        if(n>ara[i])
        {
            n=ara[i];
        }
    }
    int match=0,pos;
    for(int i=0;i<4;i++)
    {
        if(ara[i]==n)
        {
            match++;
            pos=i+1;
        }
    }
    if(match>1)
    {
        cout<<"We are the best"<<endl;
    }
    else
    {
        if(pos==1)
        {
            cout<<"Amr"<<endl;
        }
        else if(pos==2)
        {
            cout<<"Waleed"<<endl;
        }
        else if(pos==3)
        {
            cout<<"Mustafa"<<endl;
        }
        else
        {
            cout<<"Youssef"<<endl;
        }
    }
}
