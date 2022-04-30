#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,a,c,b,k,n,t,sum,counter=1;
    while(cin>>t)
    {
        sum=0;
        long long arr[t];
        for(i=1; i<=t; i++)
        {
            int x;
			cin>>x;
			if(x & 1){
				sum += x;
        }
        }
        //cout<<sum<<endl;
       //a=sum%10;
        //for(j=1;j<=t;j++)
        cout<<"Case "<<counter<<": "<<sum%10<<" taka"<<endl;
        counter++;
    }
}
