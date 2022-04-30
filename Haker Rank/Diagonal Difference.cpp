#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n=0,t,i,j,k=0,sum=0;
    cin>>t;
    long long arr[100][100];


        for(i=0; i<t; i++)
        {
            for(j=0; j<t; j++)
            {
                cin>>arr[i][j];
                if(i==j)
                    n+=arr[i][j];
                if(i+j==t-1)
                    k+=arr[i][j];
            }
        }

        cout<<abs(n-k)<<endl;

}
