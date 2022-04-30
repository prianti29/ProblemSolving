#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,minn,j,pos=1;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    minn=arr[0];
    for(i=0;i<n;i++)
    {
    	if(arr[i]<minn){
    		minn=arr[i];
            pos=i+1;
        }
    }
    cout<<minn<<" "<<pos;
}
