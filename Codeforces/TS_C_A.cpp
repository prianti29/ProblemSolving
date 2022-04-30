#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,n;
    cin>>t;
    int arr[t];
    {
        for(i=0; i<t; i++)
        {
            cin>>arr[i];
            if(arr[i]>0){
            cout<<"1"<<" ";
        }
        else if(arr[i]<0){
            cout<<"2"<<" ";
        }
        else{
            cout<<"0"<<" ";
        }
        }


    }
}
