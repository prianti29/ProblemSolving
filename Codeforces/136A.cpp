#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        int j;
        cin>>j;
        arr[j-1]=i+1;
    }
    //sort(arr,arr+n);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    /*for(i=0;i<n-1;i++)
    {
        cout<<" ";
    }*/


}
