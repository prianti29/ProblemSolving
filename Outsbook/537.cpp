#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,i,j,k,m,n;
    while(cin>>a)
    {
        for(i=a;i>=1;i--){
                  for(k=1;k<i;k++)
                {
                    cout<<" ";
                }

            for(j=a;j>=i;j--){
                cout<<"*";
            }
            cout<<endl;
        }
    }
}

