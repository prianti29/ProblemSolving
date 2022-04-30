#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,j,k,ans=0;
    cin>>t;
    while(t--)
    {
    	int sum=0;
        cin>>i>>j;
        while(i--)
        {
            cin>>k;
            sum=sum+k;
        }
        if(sum>=j)
        {
        	cout<<j<<endl;
        }
        else
        {
        	cout<<sum<<endl;
        }
    }


       // ans=min(sum,j);
        //cout<<ans;

}
