#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,i,j;
    while(cin>>a>>b)
    {
        i=a+b;
        if(i%2!=0)
        {
            j=ceil(i/2);
            cout<<j<<" "<<j+1<<endl;
        }
        else
        {
            cout<<i/2<<endl;
        }
    }
}
