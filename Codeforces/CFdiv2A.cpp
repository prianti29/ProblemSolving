#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,j,k=0;
    cin>>t;
    while(t--)
    {
        cin>>i>>j;
        k=i+j;
        if(k%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}
