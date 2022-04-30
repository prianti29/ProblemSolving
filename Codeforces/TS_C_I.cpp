#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int* min;
    min=min_element(arr+0,arr+n);
    int k=*min;
    int cnt=count(arr,arr+k,k);
    if(cnt%2!=0)
    {
        cout<<"Lucky"<<endl;
    }
    else
    {
        cout<<"Unlucky"<<endl;
    }
}
