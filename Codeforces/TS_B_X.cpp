#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,y,n,space,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(space=i;space<n;space++)
        {
           cout<<" ";
        }
        for(y=1;y<=2*i-1;y++)
        {
            cout<<"*";
        }
       cout<<endl;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
           cout<<" ";
        }
        for(j=1;j<=(n*2-(2*i-1));j++)
        {
            cout<<"*";
        }
       cout<<endl;
    }
}




