#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,n;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            cout<<i<<endl;
        }
    }
    if(n==1||n==0||n==-1){
        cout<<"-1"<<endl;
    }

}
