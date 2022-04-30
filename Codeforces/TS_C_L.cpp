#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,max,min;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    max=arr[0];
    for(i=0;i<n;i++){
        if(max<arr[i])
            max=arr[i];
    }
    min=arr[0];
    for(i=0;i<n;i++){
        if(min>arr[i])
            min=arr[i];
    }
    for(i=0;i<n;i++){
        if(max==arr[i])
            cout<<min<<" ";
        else if(min==arr[i])
        cout<<max<<" ";
        else
            cout<<arr[i]<<" ";
    }
}
