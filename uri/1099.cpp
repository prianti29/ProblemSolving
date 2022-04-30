#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,m,s,t,i,j,n,a;
    cin>>t;
    while(t--)
    {
        a=0;
        cin>>m>>n;
        if(m<n)
        {
            k=m;
            s=n;
        }
        else
        {
            k=n;
            s=m;
        }
        for(i=k+1;i<s;i++)
        {
            if(i%2!=0)
            {
                a=a+i;
            }
        }
        cout<<a<<endl;
    }
}
