#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,fact,j;
    while(cin>>a)
    {
        fact=1;
        for(int i=1;i<=a;i++){
            fact=fact*i;
        }
         cout<<fact<<endl;
    }



}
