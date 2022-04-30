#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long oct,dec=0,i=0,rem;
    cin>>oct;
    while(oct!=0)
    {
        rem=oct%10;
        oct/=10;
        dec+=rem*pow(8,i);
        ++i;
    }
    cout<<dec<<endl;
}
