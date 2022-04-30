#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,t;
    cin>>t;
    while(t--)
    {
        cin>>i>>j;
        if(i==j)
            cout<<"0"<<endl;
        else if(i>j)
        {
            if((i-j)%2==0)
                cout<<"1"<<endl;
            else
                cout<<"2"<<endl;
        }
        else
        {
            if((j-i)%2==0)
                cout<<"2"<<endl;
            else
                cout<<"1"<<endl;
        }
    }
}
