#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a;
    while(cin>>a)
    {
        if(a%7==0)
            cout<<a<<" is divisible by 7"<<endl;
        else if(a%5==0)
            cout<<a<<" is divisible by 5"<<endl;
        else
            cout<<"Confused"<<endl;
    }
}
