#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,c,i,j;
        cin>>r;
        long long sum=0;
        if(r==31)
            cout<<"2147483647"<<endl;
        else
        {
            for(i=0;i<r;i++)
            {
                for(j=0;j<=i;i++)
                {
                    if(j==0||i==0)
                        c=1;
                    else
                        c=c*(i-j+1)/j;
                    sum=sum+c;
                }
            }
            cout<<sum<<endl;
        }
    }
}
