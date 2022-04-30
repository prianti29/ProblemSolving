#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,i,j;
    cin>>a>>b;
    i=30-b;
    j=i+a+1;
    if(j>=30)
    {
        cout<<j%30<<endl;
    }
    else
    {
        cout<<j<<endl;
    }
}
