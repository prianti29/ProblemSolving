#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,y,n,space;
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
}
