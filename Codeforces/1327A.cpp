
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,t;
    cin>>t;
    while(t--)
    {
        cin>>i>>j;
        if(i>=j*j&&i%2==j%2)

            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

