#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0;
    cin>>i>>j;
    // root=sqrt(j);
    while(i<j&&(j%i==0))
    {
        j=j/i;
        k++;
    }
    //if(i!=j)
        if(i==j)
            cout<<"YES"<<endl<<k<<endl;
    // cout<<k<<endl;
        else
            cout<<"NO"<<endl;
}
