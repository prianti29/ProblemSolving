#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                cout<<m<<" ";
               // else if(i==j&&j=m-1)
                  //  cout<<m;
               // else if(i!=j&&j=)
            else
                cout<<"0"<<" ";
        }
        cout<<endl;
    }
}
