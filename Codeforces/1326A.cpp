#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            for(i=0;i<n-1;i++)
            {
                cout<<"7";
            }
            cout<<"8"<<endl;
        }
    }
}
